#
# Generated By: dol2asm
#

M128_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lv2prchk.plf
M128_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lv2prchk.lcf
M128_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lv2prchk.map

M128_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_lv2prchk/d_a_tag_lv2prchk.cpp \

M128_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_lv2prchk/d_a_tag_lv2prchk.o \

M128_LIBS := \

M128_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M128_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M128_LDSCRIPT) \
	-unused -map $(M128_MAP) \
	-w off \

$(M128_TARGET): $(M128_O_FILES) $(M128_LIBS)
	@echo [128] creating $(M128_TARGET)
	@echo $(M128_LIBS) $(M128_O_FILES) > build/M128_ofiles
	@python3 tools/lcf.py rel 128 --output $(M128_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M128_LDFLAGS) -o $(M128_TARGET) @build/M128_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_lv2prchk/%.o: rel/d/a/tag/d_a_tag_lv2prchk/%.cpp $(BUILD_DIR)/rel/d/a/tag/d_a_tag_lv2prchk/%.d
	@echo [128] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M128_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M128_D_FILES := $(M128_O_FILES:.o=.d)
$(M128_D_FILES):
include $(wildcard $(M128_D_FILES))
endif


