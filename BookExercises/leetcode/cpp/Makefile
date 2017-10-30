# the compiler
CC = g++
# compiler flags
#-g debugging info
#-Wall for compiler warnings
CFLAGS = -g -Wall -std=c++14
#Target executable
TARGET = intToEng

all: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)


