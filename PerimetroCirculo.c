#include <stdio.h>
#define Pi 3.1416

int main (){
	
	float diametro, longitud;
	
	printf ("Introduzca el valor del diametro en centimetros: ");
	scanf ("%f", &diametro);
	
	longitud = diametro * Pi;
	
	printf ("La longitud de la circunferencia es: %.2f cm", longitud);
	
	
	
	return 0;
}
