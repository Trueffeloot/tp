#
# Generated By: dol2asm
#

M629_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_spinLift.plf
M629_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_spinLift.lcf
M629_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_spinLift.map

M629_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_spinLift/d_a_obj_spinLift.cpp \

M629_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_spinLift/d_a_obj_spinLift.o \

M629_LIBS := \

M629_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M629_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M629_LDSCRIPT) \
	-unused -map $(M629_MAP) \
	-w off \

$(M629_TARGET): $(M629_O_FILES) $(M629_LIBS)
	@echo [629] creating $(M629_TARGET)
	@echo $(M629_LIBS) $(M629_O_FILES) > build/M629_ofiles
	@python3 tools/lcf.py rel 629 --output $(M629_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M629_LDFLAGS) -o $(M629_TARGET) @build/M629_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_spinLift/%.o: rel/d/a/obj/d_a_obj_spinLift/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_spinLift/%.d
	@echo [629] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M629_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M629_D_FILES := $(M629_O_FILES:.o=.d)
$(M629_D_FILES):
include $(wildcard $(M629_D_FILES))
endif


