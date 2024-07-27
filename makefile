CC = g++
CFLAGS = -std=c++17
INCLUDES = -I./raylib-5.0_macos/include
LDFLAGS = -L./raylib-5.0_macos/lib -Wl,-rpath,./raylib-5.0_macos/lib
LIBS = -lraylib

TARGET = main
SRC = main.cpp

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(SRC) $(LDFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(TARGET)