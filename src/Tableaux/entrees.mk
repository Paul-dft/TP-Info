all: entrees.a

entrees1.o : entrees1.c 
	gcc -c entrees1.c

entrees2.o : entrees2.c ../../include/entrees.h
	gcc -c entrees2.c

entrees3.o : entrees3.c ../../include/entrees.h
	gcc -c entrees3.c

entrees.a : entrees1.o entrees2.o entrees3.o 
	ar rcs ../../lib/libentree.a entrees1.o entrees2.o entrees3.o