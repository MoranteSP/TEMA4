Este es el comando  para que salga el mayor.
~~~
int mayor (int a, int b){

if (a>b){
    return a;
}else{
    return b;
}
~~~
Para comprimir los archivos usamos
~~~
gcc -c calc.c -o calc.o
gcc calc.o calcula.c -o calcula
gcc -Wall -g calcula.c calc.o -o calcula
~~~
crear el makefile con algunos comandos
y crear un .gitignore