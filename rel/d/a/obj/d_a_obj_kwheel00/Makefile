#
# Generated By: dol2asm
#

M508_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_kwheel00.plf
M508_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_kwheel00.lcf
M508_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_kwheel00.map

M508_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00.cpp \

M508_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_kwheel00/d_a_obj_kwheel00.o \

M508_LIBS := \

M508_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M508_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M508_LDSCRIPT) \
	-unused -map $(M508_MAP) \
	-w off \

$(M508_TARGET): $(M508_O_FILES) $(M508_LIBS)
	@echo [508] creating $(M508_TARGET)
	@echo $(M508_LIBS) $(M508_O_FILES) > build/M508_ofiles
	@python3 tools/lcf.py rel 508 --output $(M508_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M508_LDFLAGS) -o $(M508_TARGET) @build/M508_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_kwheel00/%.o: rel/d/a/obj/d_a_obj_kwheel00/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_kwheel00/%.d
	@echo [508] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M508_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M508_D_FILES := $(M508_O_FILES:.o=.d)
$(M508_D_FILES):
include $(wildcard $(M508_D_FILES))
endif


