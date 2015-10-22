all: lower.o isupper.o
	cc -o lowercase lower.o isupper.o

ispunc.o: isupper.c isupper.h
	cc -c isupper.c

rmpunc.o: lower.c isupper.h
	cc -c lower.c

clean:
	rm *.o
	rm lowercase


