#
# Generated By: dol2asm
#

M659_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_timeFire.plf
M659_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_timeFire.lcf
M659_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_timeFire.map

M659_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_timeFire/d_a_obj_timeFire.cpp \

M659_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_timeFire/d_a_obj_timeFire.o \

M659_LIBS := \

M659_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M659_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M659_LDSCRIPT) \
	-unused -map $(M659_MAP) \
	-w off \

$(M659_TARGET): $(M659_O_FILES) $(M659_LIBS)
	@echo [659] creating $(M659_TARGET)
	@echo $(M659_LIBS) $(M659_O_FILES) > build/M659_ofiles
	@python3 tools/lcf.py rel 659 --output $(M659_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M659_LDFLAGS) -o $(M659_TARGET) @build/M659_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_timeFire/%.o: rel/d/a/obj/d_a_obj_timeFire/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_timeFire/%.d
	@echo [659] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M659_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M659_D_FILES := $(M659_O_FILES:.o=.d)
$(M659_D_FILES):
include $(wildcard $(M659_D_FILES))
endif


