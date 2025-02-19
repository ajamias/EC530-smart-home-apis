CXX = g++

SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = bin

CXXFLAGS = -Wall -Wextra -std=c++17 -I$(INCLUDE_DIR)

SRCS = $(wildcard $(SRC_DIR)/*.cpp)

OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

TARGETS = test_user test_house test_room test_device 

.PHONY: all clean

all: $(TARGETS)
	$(BUILD_DIR)/test_user
	$(BUILD_DIR)/test_house
	$(BUILD_DIR)/test_room
	$(BUILD_DIR)/test_device

$(TARGETS): $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c tests/$@.cpp -o $(BUILD_DIR)/$@.o
	$(CXX) $(OBJS) $(BUILD_DIR)/$@.o -o $(BUILD_DIR)/$@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)
