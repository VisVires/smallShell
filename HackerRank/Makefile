# the compiler
CC = g++
# compiler flags
#-g debugging info
#-Wall for compiler warnings
CFLAGS = -g -Wall -std=c++11
#Target executable
TARGET = arraysds

all: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)


