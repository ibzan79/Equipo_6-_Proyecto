/* Objetivo: Multiplos de 5 desde 1 hasta n. */

#include <stdio.h>

int main () {
	
	int contador, numeroN;
	
	printf ("Introduzca el total de numeros a comprobar: ");
	scanf ("%d", &numeroN);
	
	contador = 1;
	
	while (contador <= numeroN){
		if (contador % 5 == 0){
			printf ("\n%d.\n", contador);
		}
		contador ++;
	}
	
	
	
	
	
	return 0;
}
