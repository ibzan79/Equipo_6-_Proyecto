/* 7. Escriba una aplicaci�n que reciba como entrada un entero que contenga s�lo 0s y 1s (es decir, un entero binario), y que imprima su equivalente decimal. 
[Sugerencia: use los operadores residuo y divisi�n para elegir los d�gitos del n�mero binario uno a la vez, de derecha a izquierda. 
En el sistema num�rico decimal, el d�gito m�s a la derecha tiene un valor posicional de 1 y el siguiente d�gito a la izquierda tiene un valor posicional de 10, despu�s 100, despu�s 1000, etc�tera. 
El n�mero decimal 234 puede interpretarse como 4 * 1 + 3 * 10 + 2 * 100. En el sistema num�rico binario, el d�gito m�s a la derecha tiene un valor posicional de 1, el siguiente d�gito a la izquierda tiene un valor posicional de 2,
luego 4, luego 8, etc�tera. El equivalente decimal del n�mero binario 1101 es 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8, o 1 + 0 + 4+ 8, o 13].
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

