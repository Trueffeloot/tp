#
# Generated By: dol2asm
#

M146_TARGET := $(BUILD_DIR)/rel/d/a/b/d_a_b_go.plf
M146_LDSCRIPT := $(BUILD_DIR)/rel/d/a/b/d_a_b_go.lcf
M146_MAP := $(BUILD_DIR)/rel/d/a/b/d_a_b_go.map

M146_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/b/d_a_b_go/d_a_b_go.cpp \

M146_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/b/d_a_b_go/d_a_b_go.o \

M146_LIBS := \

M146_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M146_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M146_LDSCRIPT) \
	-unused -map $(M146_MAP) \
	-w off \

$(M146_TARGET): $(M146_O_FILES) $(M146_LIBS)
	@echo [146] creating $(M146_TARGET)
	@echo $(M146_LIBS) $(M146_O_FILES) > build/M146_ofiles
	@python3 tools/lcf.py rel 146 --output $(M146_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M146_LDFLAGS) -o $(M146_TARGET) @build/M146_ofiles

$(BUILD_DIR)/rel/d/a/b/d_a_b_go/%.o: rel/d/a/b/d_a_b_go/%.cpp $(BUILD_DIR)/rel/d/a/b/d_a_b_go/%.d
	@echo [146] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M146_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M146_D_FILES := $(M146_O_FILES:.o=.d)
$(M146_D_FILES):
include $(wildcard $(M146_D_FILES))
endif


