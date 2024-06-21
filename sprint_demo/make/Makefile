SRCDIR=../src
INCDIR=../inc
OBJDIR=../obj
BINDIR=../bin
CFLAGS=-c -g -Wall -I${INCDIR}

all:
	gcc ${CFLAGS} ${SRCDIR}/cfss.c -o ${OBJDIR}/cfss.o
	gcc ${CFLAGS} ${SRCDIR}/admin.c -o ${OBJDIR}/admin.o
	gcc ${OBJDIR}/cfss.o ${OBJDIR}/admin.o -o ${BINDIR}/cfs
clean:
	rm gcc ${OBJDIR}/cfss.o ${OBJDIR}/admin.o ${BINDIR}/cfs

