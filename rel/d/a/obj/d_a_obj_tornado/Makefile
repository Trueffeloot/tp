#
# Generated By: dol2asm
#

M667_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_tornado.plf
M667_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_tornado.lcf
M667_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_tornado.map

M667_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado.cpp \

M667_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado.o \

M667_LIBS := \

M667_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M667_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M667_LDSCRIPT) \
	-unused -map $(M667_MAP) \
	-w off \

$(M667_TARGET): $(M667_O_FILES) $(M667_LIBS)
	@echo [667] creating $(M667_TARGET)
	@echo $(M667_LIBS) $(M667_O_FILES) > build/M667_ofiles
	@python3 tools/lcf.py rel 667 --output $(M667_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M667_LDFLAGS) -o $(M667_TARGET) @build/M667_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_tornado/%.o: rel/d/a/obj/d_a_obj_tornado/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_tornado/%.d
	@echo [667] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M667_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M667_D_FILES := $(M667_O_FILES:.o=.d)
$(M667_D_FILES):
include $(wildcard $(M667_D_FILES))
endif


