/* Mostrar los meses del año, pidiéndole al usuario un número entre 1-12 y mostrar el mes correspondiente. */

#include <stdio.h>

int main (){
	
	int mes;

	
	printf ("Introduzca un numero del 1 al 12: ");
	scanf ("%d", &mes);
	
	switch (mes){
		case 1: printf ("\nEnero."); break;
		case 2: printf ("\nFebrero."); break;
		case 3: printf ("\nMarzo."); break;
		case 4: printf ("\nAbril."); break;
		case 5: printf ("\nMayo."); break;
		case 6: printf ("\nJunio."); break;
		case 7: printf ("\nJulio."); break;
		case 8: printf ("\nAgosto."); break;
		case 9: printf ("\nSeptiembre."); break;
		case 10: printf ("\nOctubre."); break;
		case 11: printf ("\nNoviembre."); break;
		case 12: printf ("\nDiciembre."); break;
		default: printf ("\nError. Introduzca un numero del 1 al 12.");
	}
	
	return 0;
}
