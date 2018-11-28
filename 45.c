/* 7. Escriba una aplicación que reciba como entrada un entero que contenga sólo 0s y 1s (es decir, un entero binario), y que imprima su equivalente decimal. 
[Sugerencia: use los operadores residuo y división para elegir los dígitos del número binario uno a la vez, de derecha a izquierda. 
En el sistema numérico decimal, el dígito más a la derecha tiene un valor posicional de 1 y el siguiente dígito a la izquierda tiene un valor posicional de 10, después 100, después 1000, etcétera. 
El número decimal 234 puede interpretarse como 4 * 1 + 3 * 10 + 2 * 100. En el sistema numérico binario, el dígito más a la derecha tiene un valor posicional de 1, el siguiente dígito a la izquierda tiene un valor posicional de 2,
luego 4, luego 8, etcétera. El equivalente decimal del número binario 1101 es 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8, o 1 + 0 + 4+ 8, o 13].
*/

#include <stdio.h>
#include <math.h>

int main (){
	
/* Ej, 1101 = 2^3=8, 2^2=4, 2^1=2, 2^0=1. 8*1=8 + 4*1=4 + 2*0=0 + 1*1= 1 = 8 + 4 + 0 + 1= 13 decimal. */
// 1.- Pedir al usuario que nos inserte un numero binario.

	int numero, tipoNumero, division, multi, cont;
	
	multi = cont * 2;
		printf ("\n%d", multi);
		cont++;
	
	
	
	
	return 0;
}

