/* 
	Autores: Equipo 6.
	Fecha de entrega: Jueves 22 de Noviembre del 2018.
	Serie 2 - Ejercicio 2.
	Objetivo: 2. Escriba un programa en C, que realice la ordenación de un arreglo de una dimensión usando el método de "Ordenación de selección". 
				 Una ordenación de selección recorre un arreglo buscando el elemento más pequeño del mismo. Cuando encuentra el más pequeño, es intercambiado con el primer elemento del arreglo. 
				 El proceso a continuación se repite para el subarreglo que empieza con el segundo elemento del arreglo. Cada pasada del arreglo resulta en un elemento colocado en su posición correcta. 
				 Esta ordenación requiere de capacidades de procesamiento similares a la ordenación de tipo burbuja para un arreglo de n elementos, deberán de hacerse n-1 pasada, y para cada subarreglo, 
	  			 se harán n-1 comparaciones para encontrar el valor más pequeño. Cuando el subarreglo bajo procesamiento contenga un solo elemento, el arreglo habrá quedado terminado y ordenado.
*/

#include <stdio.h>

int main (){
	
	int arreglo[12] = {6,4,10,5,12,7,2,3,11,1};
	int cont1, cont2, min, aux; //El auxiliar nos sirve para poder hacer el intercambio correspondiente entre el número menor y el mayor.
	
	for(cont1 = 0; cont1 < 12; cont1++){
		min = cont1;
		for (cont2 = cont1 + 1; cont2 < 12; cont2++){
			if (arreglo[cont2] < arreglo[min]){
				min = cont2;
			}
		}
		aux = arreglo[cont1];
		arreglo[cont1] = arreglo[min];
		arreglo[min] = aux;
	}
	
	printf ("Ya ordenado: ");
	for (cont1 = 0; cont1 < 12; cont1++){
		printf ("%i ", arreglo[cont1]);
	}
	
	return 0;
}

