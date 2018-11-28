#include <stdio.h>

int main () {
	
	int peli1, peli2, peli3, precio, menor = 0, medio, mayor;
	
	printf ("      PROMOCION!");
	
	printf ("\n\nPage las dos mas baratas y llevese las tres!");
	
	printf ("\n\nPelicula 1: Introduzca el precio de la pelicula: ");
	scanf ("%d", &peli1);
	printf ("\nPelicula 2: Introduzca el precio de la pelicula: ");
	scanf ("%d", &peli2);
	printf ("\nPelicula 3: Introduzca el precio de la pelicula: ");
	scanf ("%d", &peli3);
	
	
	menor = peli1; /* Para el menor. */
	
	if (peli2 < menor){
		menor = peli2;
	}
	
	if (peli3 < menor){
		menor = peli3;
	}
	
	
	
	
	mayor = peli1; /* Para el mayor. */
	
	if (peli2 > mayor){
		mayor = peli2;
	}
	
	if (peli3 > mayor){
		mayor = peli3;
	}
	
	
	
	
	
	
	medio = medio < mayor && medio > menor; /* Para el precio de en medio. */
	
	if (peli1 < mayor && peli1 > menor){
		medio = peli1;
	}
	
	
	if (peli2 < mayor && peli2 > menor){
		medio = peli2;
	}
	
	
	if (peli3 < mayor && peli3 > menor){
		medio = peli3;
	}
	
	
	
	
	precio = menor + medio; /* El precio total va a ser igual a la suma del precio menor más el precio de en medio, puesto que la promoción aplica en este sentido. */
	
	
	printf ("\nEl precio total es de: %d$.", precio);
	
	
	
	printf ("\n\nGracias por su compra :).");
	
	
	return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	

