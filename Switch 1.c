/* Objeivo: Seleccionar un tipo de veh�culo e indicar el peaje a pagar seg�n un valor n�merico.
	1 - Turismo, peaje = $500
	2 - Autob�s, peaje = $3000
	3 - Motocicleta, peaje = $300
	4 - Caso contrario, veh�culo no autorizado.
*/

#include <stdio.h>

int main (){
	
	char turismo, autobus, moto, peaje, eleccion;
	
	printf ("Seleccionar un tipo de vehiculo:");
	printf ("\nA) turismo.");
	printf ("\nB) Autobus.");
	printf ("\nC) Motocicleta.\n");
	printf ("A - B - C: ");
	scanf ("%c", &eleccion);
	
	switch (eleccion){
		case 'A': printf ("\nEl peaje es de $500."); break;
		case 'B': printf ("\nEl peaje es de $3000."); break;
		case 'C': printf ("\nEl peaje es de $300."); break;
		default: printf ("\nError: Por favor elija una de las opciones senaladas.");
	}
	
	printf ("\n\n\nGracias por su preferencia.");
	
	return 0;
}
