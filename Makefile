test: test.c pile.o
	gcc test.c pile.o -o test
pile.o: pile.c pile.h
	gcc -c pile.c pile.h
