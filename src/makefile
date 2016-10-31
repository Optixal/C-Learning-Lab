CC = gcc
CFLAGS =
LIBS =
SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o ../build/$@ $< $(LIBS)
clean: 
	rm -f ../build/*
