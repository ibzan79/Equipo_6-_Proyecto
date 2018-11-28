/* 
	Autores: Equipo 6.
	Fecha de entrega: Jueves 27 de Septiembre del 2018.
	Serie 1 - Ejercicio 1.
	Objetivo: 1. El proceso de encontrar el valor m�s grande (es decir, el m�ximo de un grupo de valores) se utiliza frecuentemente en aplicaciones de computadora. 
	  			 Por ejemplo, un programa para determinar el ganador de un concurso de ventas recibe como entrada el n�mero de unidades vendidas por cada vendedor. 
				 El vendedor que haya vendido m�s unidades es el que gana el concurso. 
      			 Escriba un programa en C que reciba como entrada una serie de 10 n�meros enteros, y que determine e imprima el mayor de los n�meros. Su programa debe utilizar cuando menos las siguientes tres variables:
						a) contador: un contador para contar hasta 10 (es decir, para llevar el registro de cu�ntos n�meros se han introducido, y para determinar cuando se hayan procesado los 10 n�meros).
						b) numero: el entero m�s reciente introducido por el usuario.
						c) mayor: el n�mero m�s grande encontrado hasta ahora.
*/

#include <stdio.h>

int main (){
	
	int numero;
	int mayor = 0;
	int contador;
	
	contador = 1;
	
	printf ("Concurso de ventas.");
	
	while (contador <= 10){
		
		printf ("\n-Introduzca un numero: ");
		scanf ("%d", &numero);
		
		
		if (numero > mayor){
			mayor = numero; 
		}
		
		contador++;
	}
	
	printf ("\nEl ganador es el que vendio un total de: %d unidades", mayor);
	
	
	return 0;
}
