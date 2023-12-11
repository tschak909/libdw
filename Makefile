CC=cmoc
AR=lwar

dw.a: dwwrite.o dwread.o
	$(AR) -c libdw.a dwwrite.o dwread.o

dwwrite.o: dwwrite.c
	$(CC) -c dwwrite.c

dwread.o: dwread.c
	$(CC) -c dwread.c

clean:
	$(RM) dwwrite.o dwread.o libdw.a
