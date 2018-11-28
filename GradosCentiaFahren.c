/* Autor: Javier Ibzan Dávila Osorio.
   Fecha: 20-09-2018
   Objetivo: Convertir grados "Celsius" a "Fahrenheit".
   Fórmula: °F = °C · 1.8 + 32
*/

#include <stdio.h>

int main (){
	
	float gradosC, gradosF, mult, suma;
	
	mult = 0;
	suma = 0;
	
	printf ("Introduzca los grados Centigrados: ");
	scanf ("%f", &gradosC);
	
	gradosF = (gradosC * 1.8) + 32;
	
	printf ("\nLos grados en Fahrenheit son: %f", gradosF);
	
	
	
	return 0;
}
