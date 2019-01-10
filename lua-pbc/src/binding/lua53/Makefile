CC = gcc
CFLAGS = -O2 -fPIC -Wall
LUADIR = /Users/panwei/Documents/workspace/lua-5.3.2/src
TARGET = ../../../../protobuf.so

.PHONY : all clean

all : $(TARGET)

$(TARGET) : pbc-lua53.c
	$(CC) $(CFLAGS) -bundle -undefined dynamic_lookup -o $@ -I../.. -I$(LUADIR) -L../../build $^ -lpbc

clean :
	rm -f $(TARGET)
