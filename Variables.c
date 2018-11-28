/* 
  Autor: Javier Ibzan D�vila Osorio
  Fecha: 15/09/2018
  Objetivo: Ejemplos de las variables y c�mo de declararlas
*/

#include <stdio.h> 

int main () {
	int w; /* Entero: 8,9,27,-35,etc. Ocupa 16 bits y los numeros van de -32768 a 32767. */
	float x; /* Decimales: 0.078, 0.3, 2.67, etc. Ocupa 32 bits y los numeros hasta 2^32, adem�s tambi�n existe el DOUBLE, que es lo doble*/
	char z; /*�Caracteres: a,*,^,\, 5, 28, etc.*/
	
	w = 5;
	x = 3.6;
	z = 'a';
	
	printf ("Valor de w: %d\n", w);
	printf ("Valor de x: %f\n", x);
	printf ("Valor de z: %c\n", z);
	
	return 0;
	
}
