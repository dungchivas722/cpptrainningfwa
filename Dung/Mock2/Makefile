# Bien dich chuong trinh C++ voi makefile

## bien dich debug/wanning ##
DEBUG ?= 1
ENABLE_WARNINGS ?= 0
WARNINGS_AS_ERRORS ?= 1

## duong dan ##
INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build
MODEL_DIR = Model
VIEW_DIR = View
CONTROLLER_DIR = Controller
LID_DIR = Lib

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
VIEW_CPPFLAGS = -I $(INCLUDE_DIR)/$(VIEW_DIR)
CONTROLLER_CPPFLAGS = -I $(INCLUDE_DIR)/$(CONTROLLER_DIR)
MODEL_CPPFLAGS = -I $(INCLUDE_DIR)/$(MODEL_DIR)
LDFLAGS = -L./$(LID_DIR)
LDLIBS = -ltag -lz 

## dieu kien thong tin bien dich ##
ifeq ($(DEBUG), 0)
CXXFLAGS += -g -O0
EXECUTABLE_NAME = mainDebug
else
CXXFLAGS += -O3
EXECUTABLE_NAME = mainRelease
endif

## bien dich ##
CXX_COMPILER_CALL = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(MODEL_CPPFLAGS) $(CONTROLLER_CPPFLAGS) $(VIEW_CPPFLAGS)

## duong dan con ##
MODEL_SOURCES = $(wildcard $(SOURCE_DIR)/$(MODEL_DIR)/*.cpp)
VIEW_SOURCES = $(wildcard $(SOURCE_DIR)/$(VIEW_DIR)/*.cpp)
CONTROLLER_SOURCES = $(wildcard $(SOURCE_DIR)/$(CONTROLLER_DIR)/*.cpp)

MODEL_OBJECTS = $(patsubst $(SOURCE_DIR)/$(MODEL_DIR)/%.cpp, $(BUILD_DIR)/$(MODEL_DIR)/%.o, $(MODEL_SOURCES))
VIEW_OBJECTS = $(patsubst $(SOURCE_DIR)/$(VIEW_DIR)/%.cpp, $(BUILD_DIR)/$(VIEW_DIR)/%.o, $(VIEW_SOURCES))
CONTROLLER_OBJECTS = $(patsubst $(SOURCE_DIR)/$(CONTROLLER_DIR)/%.cpp, $(BUILD_DIR)/$(CONTROLLER_DIR)/%.o, $(CONTROLLER_SOURCES))

## muc tieu  ##
all: create build execute clean
create:
	@echo "Dang tao..."
	@mkdir -p $(BUILD_DIR)/$(MODEL_DIR)
	@mkdir -p $(BUILD_DIR)/$(VIEW_DIR)
	@mkdir -p $(BUILD_DIR)/$(CONTROLLER_DIR)
	@echo "Da tao xong!"

build: $(VIEW_OBJECTS) $(MODEL_OBJECTS) $(CONTROLLER_OBJECTS)
	@echo "Dang build..."
	$(CXX_COMPILER_CALL) $(SOURCE_DIR)/main.cpp $(VIEW_OBJECTS) $(MODEL_OBJECTS) $(CONTROLLER_OBJECTS) $(LDFLAGS) $(LDLIBS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)
	@echo " Da build xong!"
execute:
	@echo "Dang chay file ..."
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)
	# @clear
	@echo "Da chay xong ! va clear screen"
clean:
	rm -f $(BUILD_DIR)/$(MODEL_DIR)/*.o
	rm -f $(BUILD_DIR)/$(VIEW_DIR)/*.o
	rm -f $(BUILD_DIR)/$(CONTROLLER_DIR)/*.o
	rm -f $(BUILD_DIR)/$(EXECUTABLE_NAME)
	rm -r $(BUILD_DIR)
	@clear
	@echo "Đã xoa xong! va clear screen"
	

## duong dan cha ##
$(BUILD_DIR)/$(MODEL_DIR)/%.o: $(SOURCE_DIR)/$(MODEL_DIR)/%.cpp
	$(CXX_COMPILER_CALL) -c $< -o $@

$(BUILD_DIR)/$(VIEW_DIR)/%.o: $(SOURCE_DIR)/$(VIEW_DIR)/%.cpp
	$(CXX_COMPILER_CALL) -c $< -o $@

$(BUILD_DIR)/$(CONTROLLER_DIR)/%.o: $(SOURCE_DIR)/$(CONTROLLER_DIR)/%.cpp
	$(CXX_COMPILER_CALL) -c $< -o $@

## muc tieu gia ##
.PHONY: create build execute clean
