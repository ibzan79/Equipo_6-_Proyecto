#include <stdio.h>
#include <math.h>

int main () {
	
	int multi, cont, numN, potencia;
	
	cont = 1;
	
	printf ("Introduzca un numero: ");
	scanf ("%d", &numN);
	
	potencia = 1;
	
	while (cont >= 1 && cont < numN){
		
	multi = (pow(2,potencia));
		printf ("\n%d", multi);
		cont++;
		potencia++;
	
}
	
	
	return 0;
}
