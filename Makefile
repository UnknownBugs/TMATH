# project dir
TOP_DIR := $(shell pwd)

CXX := g++
CXX_FLAGS := -Wall -Wextra

SRC := test/tmath_debug.cpp

EXE := bin/tmath_debug

LOCAL_INC := ./ \
             libs/TDEBUG

LOCAL_INC := $(addprefix -I$(TOP_DIR)/,$(LOCAL_INC))

$(EXE): $(SRC)
	@echo + $@
	mkdir -p bin
	$(CXX) -o $@ $(CXX_FLAGS) $(SRC) $(LOCAL_INC)

.PHONY : clean

clean :
	rm -rf bin