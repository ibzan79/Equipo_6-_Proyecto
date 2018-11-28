/* 
  Autor: Javier Ibzan Davila Osorio.
  Fecha: 15/09/2018
  Objetivo: Operaciones con variables.
*/

#include <stdio.h>
#include <math.h>

int main () {
	int x;
	int y;
	int z;
	
	y = 5;
	
	
	printf ("Introduce el valor de x: ");
	scanf ("%d" , &x); /* Esto sirve para que en la compilación al usuario se le pida que escriba algo, en este caso es el valor de x. */
	printf ("El valor de x es: %d\n", x);
	printf ("El valor de y es: %d\n", y);
	
	y = y * x;
	
	printf ("Multiplicando x por y da: \n");
	printf ("x*y: %d\n", y);
	

	


	
	return 0;
}

