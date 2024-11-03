cc = gcc
CFlAGS = -Wall -g
SRC  = aecdec.c main.c minandmax.c
OBJ = %(SRC:.c=.o)
TARGET = OUTPUT

all: $(TARGET)

$(TARGET): $(OBJ)
	$(cc) $(CFLAGS) -o $@ $^

%.o: %.c header.h
	$(cc) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(TARGET) 

.PHONY: all clean
