

TARGET = turn_num

SRC = ${TARGET}.c
SRC += hello.c

cc = gcc
rm = rm

all: ${TARGET}


${TARGET}: ${SRC} 
	${cc} $^ -o $@

.PHONY: all clean


clean:
	${rm} -rf ${TARGET} *.o

