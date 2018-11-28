/* Que el usuario nos facilite que tabla quiere mostrar: */

#include <stdio.h>

int main () {
	
	int cont, n;
	
	cont = 1;
	
	printf ("¿Que tabla quieres sacar?: ");
	scanf ("%d", &n);
	
	while (cont < 11){
		
		printf ("\nEl resultado de %d por %d es igual a: %d", cont, n, cont*n);
		
		cont++;
		
	}
	
	
	
	
	
	return 0;
}
