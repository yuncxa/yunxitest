main:main.o base.o count.o
	gcc main.o base.o count.o -o main
main.o:main.c
	gcc -c main.c
base.o:base.c
	gcc -c base.c
count.o:count.c 
	gcc -c count.c

clean:
	rm *.o