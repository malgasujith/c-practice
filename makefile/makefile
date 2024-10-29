cc =gcc
# useigng automatic variable 

output: test.o
        $(cc) $< -lm -o $@
test.o:test.c
        $(cc) -c $< -o $@
clean:
         rm -f  *.o $@

# basic  c programimg

output: test.o
        gcc test.o -lm -o output
test.o:test.c
        gcc -c test.c -o test.o
clean:
         rm -f  *.o output


#  useing  automatic variables and cflags 
CC = gcc
CFLAGS = -Wall -g
LFLAGS = -lm
SRCS := $(wildcard *.c)
BINS = output
OBJS := $(SRCS:%.c=%.o)
all: $(OBJS) $(BINS)
$(BINS): $(OBJS)
        $(CC) $^ $(LFLAGS) -o $@
%.o: %.c
        $(CC)  $(CFLAGS) -c $< -o $@
clean:
        rm -f  $(OBJS) $(BINS)
