
BLUE = "\033[1;34m"
RED =  "\033[1;31m"
NONE = "\033[0m"

SUBDIR := LittleFly

.PHONY: $(SUBDIR) libxputty  recurse

$(MAKECMDGOALS) recurse: $(SUBDIR)

check-and-reinit-submodules :
	@if git submodule status 2>/dev/null | egrep -q '^[-]|^[+]' ; then \
		echo $(RED)"INFO: Need to reinitialize git submodules"$(NONE); \
		git submodule update --init; \
		echo $(BLUE)"Done"$(NONE); \
	else echo $(BLUE)"Submodule up to date"$(NONE); \
	fi

clean:
	@rm -f ./libxputty/xputty/resources/knob.png
	@rm -f ./libxputty/xputty/resources/pswitch.png

libxputty: check-and-reinit-submodules
ifeq (,$(wildcard ./libxputty/xputty/resources/knob.png))
	cp ./LittleFly/gui/knob.png ./libxputty/xputty/resources/
endif
ifeq (,$(wildcard ./libxputty/xputty/resources/pswitch.png))
	cp ./LittleFly/gui/pswitch.png ./libxputty/xputty/resources/
endif
	@exec $(MAKE) -j 1 -C $@ $(MAKECMDGOALS)

$(SUBDIR): libxputty
	@exec $(MAKE) -j 1 -C $@ $(MAKECMDGOALS)

