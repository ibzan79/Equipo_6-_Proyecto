/* Autor: Javier Ibzan Dávila Osorio
   Fecha: 18-09-2018
   Objetivo: 
   1º) Pida por teclado una hora en tres variables: horas, minutos y segundos (datos enteros)
   2º) Muestre por pantalla:
   "HORA CORRECTA", en el caso de que la hora sea válida.
   "HORA INCORRECTA", en el caso de que la hora no sea válida.
    Nota: para que una hora sea válida, se tiene que cumplir que:
    -Las horas deben ser mayor o igual que 0 y menor o igual que 23.
    -Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
    -Los segundos deben ser mayor o igual que 0 y menor o igual que 59
    
*/

#include <stdio.h>

int main () {
	
	int horas, minutos, segundos;
	
	
	
	printf ("Horas:", horas);
	scanf ("%d", &horas);
	printf ("\nMinutos:", minutos);
	scanf ("%d", &minutos);
	printf ("\nSegundos:", segundos);
	scanf ("%d", &segundos);
	
	if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59)
		printf ("\n\n\nLa hora es correcta.");
		else 
		printf ("\n\n\nLa hora es incorrecta.");
		

	return 0;
}
