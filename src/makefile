CC = gcc
CFLAGS =
LIBS =
SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) -o ../build/$@ $< $(LIBS) $(CFLAGS)
clean: 
	rm -f ../build/*
