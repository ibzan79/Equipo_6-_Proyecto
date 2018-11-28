/* Objetivo: Pedir al ususario que ingrese un numero e imprimir la raiz cuadrada del numero que el usuario proporcionó. Si el numero que el usuario proporcionó es negativo, imprimir un mensaje con la leyenda "Tiene raíz imagiaria". */

#include <stdio.h>
#include <math.h>

int main (){
	
	float numero, resultado;
	
	
	printf ("La raiz cuadrada de un numero cualquiera");
	printf ("\n\nIntroduzca un numero cualquiera: ");
	scanf ("%f", &numero);
	
	resultado = sqrt(numero);
	
	if (numero > 0){
		printf ("\nLa raiz cuadrada es: %.2f", resultado);
	}
	else if (numero < 0){
		printf ("\nEl numero %.2f tiene raiz imaginaria.", numero);
	}
	else {
		printf ("\nLa raiz de 0 es 0.", resultado);
	}
	
	return 0;
}
