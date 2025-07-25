# Makefile for utility_store_management C++ project

CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17
SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)
TARGET := utility_store_management

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean