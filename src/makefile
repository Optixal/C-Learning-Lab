CC = gcc
CFLAGS =
LIBS =
SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))
PROGSCSV = $(subst  ,,,$(PROGS))

all: $(PROGS)

%: %.c
	$(CC) -o ../build/$@ $< $(LIBS) $(CFLAGS)
clean: 
	rm -f ../build/{$(PROGSCSV)}
