#include <stdio.h>
#include "calc.h"

int main(){

    int a, b;
    a=10;
    b=5;
    printf ("Introduce 2 numeros:\n");
    scanf  ("%d %d", &a, &b);
    printf ("La suma entre %d y %d vale %d\n",a,b,suma(a,b));
    printf ("La resta entre %d y %d vale %d\n",a,b,resta(a,b));
    printf ("La multiplica entre %d y %d vale %d\n",a,b,multiplica(a,b));
    printf ("La divide entre %d y %d vale %d\n",a,b,divide(a,b));
    printf ("El mayor entre %d y %d vale %d\n",a,b,mayor(a,b));
    
    return 0;
}