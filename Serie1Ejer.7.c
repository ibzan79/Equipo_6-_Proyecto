/* 
	Autores: Equipo 6.
	Fecha de entrega: Jueves 27 de Septiembre del 2018.
	Serie 1 - Ejercicio 7.
	Objetivo: 7. Escriba una aplicación que reciba como entrada un entero que contenga sólo 0s y 1s (es decir, un entero binario), y que imprima su equivalente decimal. 
				 [Sugerencia: use los operadores residuo y división para elegir los dígitos del número binario uno a la vez, de derecha a izquierda. 
				 En el sistema numérico decimal, el dígito más a la derecha tiene un valor posicional de 1 y el siguiente dígito a la izquierda tiene un valor posicional de 10, después 100, después 1000, etcétera. 
				 El número decimal 234 puede interpretarse como 4 * 1 + 3 * 10 + 2 * 100. En el sistema numérico binario, el dígito más a la derecha tiene un valor posicional de 1, 
				 el siguiente dígito a la izquierda tiene un valor posicional de 2,luego 4, luego 8, etcétera. El equivalente decimal del número binario 1101 es 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8, o 1 + 0 + 4 + 8, o 13].
*/


#include <stdio.h>
#include <math.h>

int main () {
	
	int numN, resto=0, resul, potencia, numM, decimal, suma;
	
	printf ("Introduzca un numero binario: ");
	scanf ("%d", &numN);
	
	potencia = 0;
	
	suma = 0;
	
	
	while (numN >= 1){	
	
		resul = numN / 10;
		resto = numN % 10;
		
		numN = (numN - resto)/10;	
		
		numM = (pow (2, potencia)); // numM = al numero de potencias que debe haber.
	
		decimal = resto * numM;
		
		suma = suma + decimal;
		
		potencia++;
		
		
	}
	
	printf ("\nSu equivalente en decimal es: %d", suma);
		
	return 0;
}
