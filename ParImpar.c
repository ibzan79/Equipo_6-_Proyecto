/* Determinar si un numero es par o impar */

#include <stdio.h>

int main (){
	
	int numero;
	
	printf ("Introduzca un numero entero: ", numero);
	scanf ("%d", &numero);
	
	if (numero % 2 == 0){
		printf ("EL numero es par.");
	}
	
	if (numero % 2 != 0){
		printf ("El numero es impar.");
	}
	
	return 0;
}
