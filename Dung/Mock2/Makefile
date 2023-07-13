 # Bien dich chuong trinh C++ voi makefile

## bien dich debug/wanning ##
DEBUG ?= 0
ENABLE_WARNINGS ?= 0
WARNINGS_AS_ERRORS ?= 1

## duong dan ##
INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build
MODEL_DIR = Model
VIEW_DIR = View
CONTROLLER_DIR = Controller

## dieu kien bien dich ##
ifeq ($(ENABLE_WARNINGS), 0)
CXX_WARNINGS = -Wall -Wextra -Wpedantic
else
CXX_WARNINGS =
endif
ifeq ($(WARNINGS_AS_ERRORS), 0)
CXX_WARNINGS += -Werror
endif

## thong tin chuan bien dich ##
CXX_STANDARD = c++17
CXX = g++
CXXFLAGS = $(CXX_WARNINGS) -std=$(CXX_STANDARD)
CPPFLAGS = -I $(INCLUDE_DIR)
LDFLAGS =

## dieu kien thong tin bien dich ##
ifeq ($(DEBUG), 0)
CXXFLAGS += -g -O0
EXECUTABLE_NAME = mainDebug
else
CXXFLAGS += -O3
EXECUTABLE_NAME = mainRelease
endif

## bien dich ##
CXX_COMPILER_CALL = $(CXX) $(CXXFLAGS) $(CPPFLAGS)

## duong dan con ##
CXX_SOURCES = $(wildcard $(SOURCE_DIR)/*.cpp)
CXX_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CXX_SOURCES))

## muc tieu  ##
all: create build

create:
	@mkdir -p build

build: $(CXX_OBJECTS)
	$(CXX_COMPILER_CALL) $(CXX_OBJECTS) $(LDFLAGS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)

execute:
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

clean:
	rm -f $(BUILD_DIR)/*.o
	rm -f $(BUILD_DIR)/$(EXECUTABLE_NAME)
	rm -r $(BUILD_DIR)

## duong dan cha ##
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CXX_COMPILER_CALL) -c $< -o $@

## muc tieu gia ##
.PHONY: create build execute clean
