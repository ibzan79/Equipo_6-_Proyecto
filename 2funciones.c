/* Objetivo: Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un n�mero cualquiera por pantalla, el n�mero se pedir� en el programa principal. Usar procedimiento. */

#include <stdio.h>

void tabla();

int main (){
	
	tabla ();

	return 0;
}

void tabla(){
	
	int mul, num, resul=0;
	printf ("Inserte un numero entero: ");
	scanf ("%d", &num);
	
    for (mul=1; mul<21; mul++){
    	
    	resul = num * mul;
    	
    	printf ("\n%d por %d es: %d", num, mul, resul);
    	
	}
}

