#
# Generated By: dol2asm
#

M198_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_hb_leaf.plf
M198_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_hb_leaf.lcf
M198_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_hb_leaf.map

M198_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf.cpp \

M198_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_hb_leaf/d_a_e_hb_leaf.o \

M198_LIBS := \

M198_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M198_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M198_LDSCRIPT) \
	-unused -map $(M198_MAP) \
	-w off \

$(M198_TARGET): $(M198_O_FILES) $(M198_LIBS)
	@echo [198] creating $(M198_TARGET)
	@echo $(M198_LIBS) $(M198_O_FILES) > build/M198_ofiles
	@python3 tools/lcf.py rel 198 --output $(M198_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M198_LDFLAGS) -o $(M198_TARGET) @build/M198_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_hb_leaf/%.o: rel/d/a/e/d_a_e_hb_leaf/%.cpp $(BUILD_DIR)/rel/d/a/e/d_a_e_hb_leaf/%.d
	@echo [198] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M198_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M198_D_FILES := $(M198_O_FILES:.o=.d)
$(M198_D_FILES):
include $(wildcard $(M198_D_FILES))
endif


