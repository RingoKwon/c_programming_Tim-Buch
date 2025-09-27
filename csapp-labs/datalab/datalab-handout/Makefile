#
# Makefile that builds btest and other helper programs for the CS:APP data lab
# 
CC      = clang
CFLAGS  = -O2 -Wall -Wextra -std=c11
LDFLAGS =
LIBS    = -lm

all: btest fshow ishow

btest: btest.c bits.c decl.c tests.c btest.h bits.h
	$(CC) $(CFLAGS) -o $@ bits.c btest.c decl.c tests.c $(LIBS)

fshow: fshow.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

ishow: ishow.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

# Forces a recompile. Used by the driver program. 
btestexplicit:
	$(CC) $(CFLAGS) -o btest bits.c btest.c decl.c tests.c $(LIBS)

clean:
	rm -f *.o btest fshow ishow *~


