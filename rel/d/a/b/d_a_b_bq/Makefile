#
# Generated By: dol2asm
#

M139_TARGET := $(BUILD_DIR)/rel/d/a/b/d_a_b_bq.plf
M139_LDSCRIPT := $(BUILD_DIR)/rel/d/a/b/d_a_b_bq.lcf
M139_MAP := $(BUILD_DIR)/rel/d/a/b/d_a_b_bq.map

M139_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/b/d_a_b_bq/d_a_b_bq.cpp \

M139_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/b/d_a_b_bq/d_a_b_bq.o \

M139_LIBS := \

M139_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \
#	-sym on \

M139_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M139_LDSCRIPT) \
	-unused -map $(M139_MAP) \
	-w off \

$(M139_TARGET): $(M139_O_FILES) $(M139_LIBS)
	@echo [139] creating $(M139_TARGET)
	@echo $(M139_LIBS) $(M139_O_FILES) > build/M139_ofiles
	@python3 tools/lcf.py rel 139 --output $(M139_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M139_LDFLAGS) -o $(M139_TARGET) @build/M139_ofiles

$(BUILD_DIR)/rel/d/a/b/d_a_b_bq/%.o: rel/d/a/b/d_a_b_bq/%.cpp $(BUILD_DIR)/rel/d/a/b/d_a_b_bq/%.d
	@echo [139] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M139_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M139_D_FILES := $(M139_O_FILES:.o=.d)
$(M139_D_FILES):
include $(wildcard $(M139_D_FILES))
endif


