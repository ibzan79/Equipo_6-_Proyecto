/* Objetivo: Comprobar si un numero digitado por el usuario es positivo o negativo. */

#include <stdio.h>

int main (){
	
	int numero;
	
	printf ("Introduza un numero cualquiera que sea negativo O positivo: ");
	scanf ("%d", &numero);
	
	if (numero > 0){
		printf ("Su numero es positivo.");
	}
	
	if (numero < 0){
		printf ("Su numero es negativo");
	}
	
	if (numero == 0){
		printf ("Su numero es 0");
	}
	
	
	
	return 0;
}
