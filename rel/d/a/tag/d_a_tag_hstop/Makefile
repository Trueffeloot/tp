#
# Generated By: dol2asm
#

M127_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_hstop.plf
M127_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_hstop.lcf
M127_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_hstop.map

M127_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/tag/d_a_tag_hstop/d_a_tag_hstop.cpp \

M127_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_hstop/d_a_tag_hstop.o \

M127_LIBS := \

M127_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M127_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M127_LDSCRIPT) \
	-unused -map $(M127_MAP) \
	-w off \

$(M127_TARGET): $(M127_O_FILES) $(M127_LIBS)
	@echo [127] creating $(M127_TARGET)
	@echo $(M127_LIBS) $(M127_O_FILES) > build/M127_ofiles
	@python3 tools/lcf.py rel 127 --output $(M127_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M127_LDFLAGS) -o $(M127_TARGET) @build/M127_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_hstop/%.o: rel/d/a/tag/d_a_tag_hstop/%.cpp $(BUILD_DIR)/rel/d/a/tag/d_a_tag_hstop/%.d
	@echo [127] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M127_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M127_D_FILES := $(M127_O_FILES:.o=.d)
$(M127_D_FILES):
include $(wildcard $(M127_D_FILES))
endif


