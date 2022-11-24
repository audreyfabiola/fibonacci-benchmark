all: mylib.o
	gcc -o main.out main_test.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c
clear:
	rm -rf *.out
	rm -rf *.o

time-recursive: mylib.o 
	gcc -o main_b_time_recursive.out main_b_time_recursive.c mylib.o

time-iterative: mylib.o
	gcc -o main_b_time_iterative.out main_b_time_iterative.c mylib.o

space-recursive: mylib.o 
	gcc -o main_b_space_recursive.out main_b_space_recursive.c mylib.o 

space-iterative: mylib.o
	gcc -o main_b_space_iterative.out main_b_space_iterative.c mylib.o