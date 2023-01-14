CC=gcc
CFLAGS= -c -02

SRC=$(wildcard *.c)

TEST=tests
TESTS=$(wildcard $(TEST)/*.test.c)
TESTSBIN=$(patsubst $(TEST)/%.test.c, $(TEST)/bin/%, $(SRCS))

all: 
	$(CC) *.c

test:


clean: 
	rm -rf *.out
