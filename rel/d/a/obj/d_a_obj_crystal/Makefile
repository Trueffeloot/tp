#
# Generated By: dol2asm
#

M432_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crystal.plf
M432_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crystal.lcf
M432_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crystal.map

M432_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_crystal/d_a_obj_crystal.cpp \

M432_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_crystal/d_a_obj_crystal.o \

M432_LIBS := \

M432_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M432_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M432_LDSCRIPT) \
	-unused -map $(M432_MAP) \
	-w off \

$(M432_TARGET): $(M432_O_FILES) $(M432_LIBS)
	@echo [432] creating $(M432_TARGET)
	@echo $(M432_LIBS) $(M432_O_FILES) > build/M432_ofiles
	@python3 tools/lcf.py rel 432 --output $(M432_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M432_LDFLAGS) -o $(M432_TARGET) @build/M432_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_crystal/%.o: rel/d/a/obj/d_a_obj_crystal/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crystal/%.d
	@echo [432] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M432_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M432_D_FILES := $(M432_O_FILES:.o=.d)
$(M432_D_FILES):
include $(wildcard $(M432_D_FILES))
endif


