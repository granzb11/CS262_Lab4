all: lab4

lab4: lab4.o lab4_lib.o
	gcc lab4.o lab4_lib.o -o lab4

lab4.o: lab4.c lab4_lib.o
	gcc lab4.c -c -o lab4.o

lab4_lib.o: lab4_lib.c lab4.h
	gcc lab4_lib.c -c -o lab4_lib.o

