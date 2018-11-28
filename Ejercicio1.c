/* Autor: Javier Ibzan Davila Osorio
   Fecha: 15-09-2018
   Objetivo: 
   
   1º) Pida por teclado dos números (datos enteros).

   2º) Calcule la suma y multiplicación de los dos números introducidos.

   3º) Muestre por pantalla los resultados (datos enteros).
*/

#include <stdio.h>

int main () {
	int numero1;
	int numero2;
	int suma;
	int multiplica;
	
	printf ("Introduzca el primer numero: ", numero1); /* En esta expresión no se usa el %d, solo en el scanf */
	scanf ("%d", &numero1);
	printf ("Introduza el segundo numero: ", numero2);
	scanf ("%d", &numero2);
	
	suma = numero1 + numero2;
	printf ("La suma de los dos numeros es: %d\n", suma);
	
	multiplica = numero1 * numero2;
	printf ("La multiplicación de los dos numeros es: %d", multiplica);
	
	return 0;
	
	
	
	
}
