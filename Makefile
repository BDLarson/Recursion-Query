#******************************************************************************
## Function name: Makefile
##
## DESCRIPTION:   A set of commands to compile all files in HW7b
##
## Parameters:    n/a
##
## Return values: n/a
##
##*****************************************************************************

# Declare the variables
CC = gcc

CFLAGS = -c

# This target will compile all the files
all: hello

# This target will compile all the files
hello: main.o
	$(CC) -o HW7b main.o

# This target will compile main.o only
main.o: main.c
	$(CC) $(CFLAGS) main.c

# This target will remove the executable and all object files
clean:
	rm -rf *o HW7b
