calcula:calcula.c calc.o

	gcc -Wall -g calcula.c calc.o -o calcula
calc.o:calc.calc
	gcc -c calc.c -o calc.o

.PHONY:clean
clean:
	rm -f *.o calcula
Install:dist
	cp -r ../dist/* /
	tar -cvf calcula.tar source: calcula.tar
