makestatic : lib/libMathOper.a  
	cd ..;
	gcc -I./lib -L./lib -g main.c -lMathOper -o makestatic
add.o : lib/add.c
	cd lib;
	gcc -c add.c
sub.o : lib/sub.c
	gcc -c sub.c
mul.o : lib/mul.c
	gcc -c mul.c
div.o : lib/div.c
	gcc -c div.c
lib/libMathOper.a : lib/add.o lib/sub.o lib/mul.o lib/div.o
	ar rcs lib/libMathOper.a lib/add.o lib/sub.o lib/mul.o lib/div.o
clean : 
	rm -f makestatic lib/libMathOper.a lib/add.o lib/sub.o lib/mul.o lib/div.o
