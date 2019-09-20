PREFIX := /usr/local

AR := ar
ARSWITCHES := -vr

CC := gcc
CSWITCHES := -c -Wall -pedantic

TARGETS := 162lib.c
CTARGETS := $(patsubst %.c, %.o, $(TARGETS))
ARTARGETS := $(addprefix lib, $(patsubst %.c, %.a, $(TARGETS)))
INCLUDES := 162lib.h

162lib.o: ${TARGETS} ${INCLUDES}
	${CC} ${CSWITCHES} ${TARGETS}

lib162lib.a: ${CTARGETS}
	${AR} ${ARSWITCHES} ${ARTARGETS} ${CTARGETS}

install: lib162lib.a
	cp ${ARTARGETS} ${PREFIX}/lib
	cp ${INCLUDES} ${PREFIX}/include

clean:	
	rm ${CTARGETS} ${ARTARGETS}
