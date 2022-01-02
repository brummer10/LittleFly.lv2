/*
 *                           0BSD 
 * 
 *                    BSD Zero Clause License
 * 
 *  Copyright (c) 2020 Hermann Meyer
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.

 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 */


/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                define PortIndex and plugin uri
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

#include "LittleFly.h"

/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                define controller numbers
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

#define CONTROLS 2 

/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                include the LV2 interface
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

#include "lv2_plugin.cc"
#include "xresources.h"

/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                define the plugin settings
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// setup a color theme
static void set_my_theme(Xputty *main) {
    main->color_scheme->normal = (Colors) {
         /* cairo    / r  / g  / b  / a  /  */
        /*fg */       { 0.0, 0.0, 0.0, 1.0},
        /*bg */       { 0.3, 0.3, 0.3, 1.0},
        /*base */     { 0.35, 0.0, 0.0, 1.0},
        /*text */     { 0.0, 0.0, 0.0, 1.0},
        /*shadow */   { 0.0, 0.0, 0.0, 0.2},
        /*frame */    { 0.0, 0.0, 0.0, 1.0},
        /*light */    { 0.1, 0.1, 0.2, 1.0}
    };

    main->color_scheme->prelight = (Colors) {
        /*fg */       { 0.0, 0.0, 0.0, 1.0},
        /*bg */       { 0.25, 0.25, 0.25, 1.0},
        /*base */     { 0.35, 0.13, 0.17, 1.0},
        /*text */     { 0.0, 0.0, 0.0, 1.0},
        /*shadow */   { 0.1, 0.1, 0.1, 0.4},
        /*frame */    { 0.3, 0.3, 0.3, 1.0},
        /*light */    { 0.3, 0.3, 0.3, 1.0}
    };

    main->color_scheme->selected = (Colors) {
        /*fg */       { 0.0, 0.0, 0.0, 1.0},
        /*bg */       { 0.9, 0.9, 0.9, 1.00 },
        /*base */     { 0.35, 0.0, 0.0, 1.0},
        /*text */     { 0.0, 0.0, 0.0, 1.0},
        /*shadow */   { 0.0, 0.0, 0.0, 0.2},
        /*frame */    { 0.18, 0.18, 0.18, 1.0},
        /*light */    { 0.18, 0.18, 0.28, 1.0}
    };

    main->color_scheme->active = (Colors) {
        /*fg */       { 0.0, 0.0, 0.0, 1.0},
        /*bg */       { 0.9, 0.9, 0.9, 1.00 },
        /*base */     { 0.35, 0.0, 0.0, 1.0},
        /*text */     { 0.0, 0.0, 0.0, 1.0},
        /*shadow */   { 0.18, 0.18, 0.18, 0.2},
        /*frame */    { 0.18, 0.18, 0.18, 1.0},
        /*light */    { 0.18, 0.18, 0.28, 1.0}
    };
}

// draw the window
static void draw_my_window(void *w_, void* user_data) {
    Widget_t *w = (Widget_t*)w_;
    set_pattern(w,&w->app->color_scheme->selected,&w->app->color_scheme->normal,BACKGROUND_);
    cairo_paint (w->crb);
    set_pattern(w,&w->app->color_scheme->normal,&w->app->color_scheme->selected,BACKGROUND_);
    cairo_set_line_width(w->crb,4);
    cairo_rectangle (w->crb,4,4,w->width-8,w->height*0.48);
    //cairo_set_source_rgb (w->crb, 0.6, 0.6, 0.6);
    cairo_fill_preserve (w->crb);
    cairo_set_source_rgb (w->crb, 0.0, 0.0, 0.0); 
    cairo_stroke(w->crb);

    cairo_rectangle (w->crb,4,w->height*0.48,w->width-8,w->height*0.48);
    cairo_stroke(w->crb);

    cairo_text_extents_t extents;
    use_text_color_scheme(w, get_color_state(w));
    cairo_set_source_rgb (w->crb,0.0, 0.0, 0.0);
    float font_size = min(20.0,((w->height/2.2 < (w->width*0.5)/3) ? w->height/2.2 : (w->width*0.5)/3));
    cairo_set_font_size (w->crb, font_size);
    cairo_text_extents(w->crb,w->label , &extents);
    double tw = extents.width+60.0;
    double th = extents.height;

    widget_set_scale(w);
    cairo_move_to (w->crb, w->scale.init_width-tw, 40 );
    cairo_show_text(w->crb, w->label);
    cairo_move_to (w->crb, w->scale.init_width-tw, 40+th );
    cairo_set_font_size (w->crb, font_size*0.6);
    cairo_show_text(w->crb, "OverDrive");
    widget_reset_scale(w);
    cairo_new_path (w->crb);
}

void plugin_value_changed(X11_UI *ui, Widget_t *w, PortIndex index) {
    // do special stuff when needed
}

void plugin_set_window_size(int *w,int *h,const char * plugin_uri) {
    (*w) = 200; //set initial widht of main window
    (*h) = 180; //set initial heigth of main window
}

const char* plugin_set_name() {
    return "LittleFly"; //set plugin name to display on UI
}

void plugin_create_controller_widgets(X11_UI *ui, const char * plugin_uri) {
    set_my_theme(&ui->main);
    ui->win->func.expose_callback = draw_my_window;

    ui->widget[0] = add_my_image_knob(ui->widget[0], VOLUME,"Volume", ui, 120, 100, 66, 66);
    widget_get_png(ui->widget[0], LDVAR(knob_png));
    set_adjustment(ui->widget[0]->adj,0.5, 0.5, 0.0, 1.0, 0.01, CL_CONTINUOS);

    ui->widget[1] = add_my_switch_image(ui->widget[1], BYPASS, "Off", ui,30, 96, 66, 70);
    widget_get_png(ui->widget[1], LDVAR(pswitch_png));
    strncpy(ui->widget[1]->input_label,"On",32);
}

void plugin_cleanup(X11_UI *ui) {
    // clean up used sources when needed
}

void plugin_port_event(LV2UI_Handle handle, uint32_t port_index,
                        uint32_t buffer_size, uint32_t format,
                        const void * buffer) {
    X11_UI* ui = (X11_UI*)handle;
    if (port_index == (uint32_t) BYPASS) ui->block_event = -1;
}

