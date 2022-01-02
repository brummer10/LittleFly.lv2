	
	UNAME := $(shell uname)
	STRIP ?= strip
	# check if user is root
	user = $(shell whoami)
	ifeq ($(user),root)
	INSTALL_DIR ?= /usr/lib/lv2
	else 
	INSTALL_DIR ?= ~/.lv2
	endif

	# check CPU and supported optimization flags
	ifeq ($(UNAME), Linux)
		ifneq ($(shell cat /proc/cpuinfo | grep sse3 ) , )
			SSE_CFLAGS = -msse3 -mfpmath=sse
		else ifneq ($(shell cat /proc/cpuinfo | grep sse2 ) , )
			SSE_CFLAGS = -msse2 -mfpmath=sse
		else ifneq ($(shell cat /proc/cpuinfo | grep sse ) , )
			SSE_CFLAGS = -msse -mfpmath=sse
			else ifneq ($(shell cat /proc/cpuinfo | grep ARM ) , )
			ifneq ($(shell cat /proc/cpuinfo | grep ARMv7 ) , )
				ifneq ($(shell cat /proc/cpuinfo | grep vfpd32 ) , )
					SSE_CFLAGS = -march=armv7-a -mfpu=vfpv3 
				else ifneq ($(shell cat /proc/cpuinfo | grep vfpv3 ) , )
					SSE_CFLAGS = -march=armv7-a -mfpu=vfpv3
				endif
			else
				ARMCPU = "YES"
			endif
		else
			SSE_CFLAGS =
		endif
	endif

	# check LD version
	ifneq ($(shell xxd --version 2>&1 | head -n 1 | grep xxd),)
		USE_XXD = 1
	else ifneq ($(shell $(LD) --version 2>&1 | head -n 1 | grep LLD),)
		ifneq ($(shell uname -a | grep  x86_64), )
			LDEMULATION := elf_x86_64
		else ifneq ($(shell uname -a | grep amd64), )
			LDEMULATION := elf_x86_64
		else ifneq ($(shell uname -a | grep i386), )
			LDEMULATION := elf_i386
		endif
		USE_LDD = 1
	else ifneq ($(shell gold --version 2>&1 | head -n 1 | grep gold),)
		LD = gold
	endif

	# set bundle name
	NAME = LittleFly
	BUNDLE = $(NAME).lv2
	VER = 1.0

	RESOURCES_DIR :=./gui/
	LIB_DIR := ../libxputty/libxputty/
	HEADER_DIR := $(LIB_DIR)include/
	INCLUDE_DIR := $(LIB_DIR)/lv2_plugin/


	RESOURCES := $(wildcard $(RESOURCES_DIR)*.png)
	RESOURCES_OBJ := $(notdir $(patsubst %.png,%.o,$(RESOURCES)))
	RESOURCES_LIB := $(notdir $(patsubst %.png,%.a,$(RESOURCES)))
	RESOURCE_EXTLD := $(notdir $(patsubst %.png,%_png,$(RESOURCES)))
	RESOURCEHEADER := xresources.h
	# set compile flags
	CXXFLAGS += -O2 -D_FORTIFY_SOURCE=2 -I. -I./dsp -I./plugin -fPIC -DPIC -O2 -Wall -fstack-protector -funroll-loops \
	-ffast-math -fomit-frame-pointer -fstrength-reduce -fdata-sections \
	-Wl,--gc-sections -Wl,-z,relro,-z,now -Wl,--exclude-libs,ALL -Wl,-z,defs $(SSE_CFLAGS)
	LDFLAGS += -I. -shared -lm -Wl,-z,noexecstack -fvisibility=hidden
	GUI_LDFLAGS += -I./gui -I$(HEADER_DIR) -I$(INCLUDE_DIR) -Wl,-z,noexecstack -fvisibility=hidden \
	-L. $(LIB_DIR)libxputty.a -shared `pkg-config --cflags --libs cairo x11` -lm 
	# invoke build files
	OBJECTS = plugin/$(NAME).cpp 
	GUI_OBJECTS = gui/$(NAME)_x11ui.c
	## output style (bash colours)
	BLUE = "\033[1;34m"
	RED =  "\033[1;31m"
	NONE = "\033[0m"

.PHONY : $(HEADER_DIR)*.h mod all clean install uninstall 

all : $(RESOURCEHEADER) check $(NAME)
	@mkdir -p ./$(BUNDLE)
	@cp ./plugin/*.ttl ./$(BUNDLE)
	@mv ./*.so ./$(BUNDLE)
	@if [ -f ./$(BUNDLE)/$(NAME).so ]; then echo $(BLUE)"build finish, now run make install"; \
	else echo $(RED)"sorry, build failed"; fi
	@echo $(NONE)

mod : 
	@echo "Not implemented for $(NAME)"

$(RESOURCEHEADER): $(RESOURCES_OBJ)
	rm -f $(RESOURCEHEADER)
	for f in $(RESOURCE_EXTLD); do \
		echo 'EXTLD('$${f}')' >> $(RESOURCEHEADER) ; \
	done

ifdef USE_XXD
$(RESOURCES_OBJ): $(RESOURCES)
	@#use this line to regenerate the *.c files from used images
	@cd $(RESOURCES_DIR) && xxd -i $(patsubst %.o,%.png,$@) > $(patsubst %.o,%.c,$@)
	$(CC) -c $(RESOURCES_DIR)$(patsubst %.o,%.c,$@) -o $@
	$(AR) rcs $(patsubst %.o,%.a,$@) $@
else ifdef USE_LDD
$(RESOURCES_OBJ): $(RESOURCES)
	cd $(RESOURCES_DIR) && $(LD) -r -b binary -m $(LDEMULATION) -z noexecstack $(patsubst %.o,%.png,$@) -o ../$@
	$(AR) rcs $(patsubst %.o,%.a,$@) $@
	LDFLAGS += -DUSE_LD=1
else
$(RESOURCES_OBJ): $(RESOURCES)
	cd $(RESOURCES_DIR) && $(LD) -r -b binary -z noexecstack --strip-all $(patsubst %.o,%.png,$@) -o ../$@
	$(AR) rcs $(patsubst %.o,%.a,$@) $@
	LDFLAGS += -DUSE_LD=1
endif

check :
ifdef ARMCPU
	@echo $(RED)ARM CPU DEDECTED, please check the optimization flags
	@echo $(NONE)
endif

clean :
	rm -f *.a *.o *.so xresources.h
	@rm -f $(NAME).so
	@rm -rf ./$(BUNDLE)
	@echo ". ." $(BLUE)", clean up"$(NONE)

dist-clean :
	@rm -f $(NAME).so
	@rm -rf ./$(BUNDLE)
	@echo ". ." $(BLUE)", clean up"$(NONE)

install :
ifneq ("$(wildcard ./$(BUNDLE))","")
	@mkdir -p $(DESTDIR)$(INSTALL_DIR)/$(BUNDLE)
	cp -r ./$(BUNDLE)/* $(DESTDIR)$(INSTALL_DIR)/$(BUNDLE)
	@echo ". ." $(BLUE)", done"$(NONE)
else
	@echo ". ." $(BLUE)", you must build first"$(NONE)
endif

uninstall :
	@rm -rf $(INSTALL_DIR)/Xmonc.lv2
	@rm -rf $(INSTALL_DIR)/$(BUNDLE)
	@echo ". ." $(BLUE)", done"$(NONE)

$(NAME) :
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(LDFLAGS) -o $(NAME).so
	$(CXX) $(CXXFLAGS) -Wl,-z,nodelete $(GUI_OBJECTS) -L. $(RESOURCES_LIB) $(GUI_LDFLAGS) -o $(NAME)_ui.so
	$(STRIP) -s -x -X -R .comment -R .note.ABI-tag $(NAME).so
	$(STRIP) -s -x -X -R .comment -R .note.ABI-tag $(NAME)_ui.so

nogui :
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(LDFLAGS) -o $(NAME).so
	$(STRIP) -s -x -X -R .comment -R .note.ABI-tag $(NAME).so

doc:
	#pass
