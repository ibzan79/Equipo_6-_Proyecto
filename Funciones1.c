/* Objetivo: Hacer un programa que realice la media aritmética (promedio) de dos números. Con funciones. */

#include <stdio.h>

int promedio (int a, int b);

int main (){
	
	int n1, n2, x;
	
	printf ("Digite dos numeros: ");
	scanf ("%d %d", &n1, &n2);
	
	x = promedio (n1, n2)/2;
	
	printf ("\nEl promedio entre el numero %d y el numero %d es: %d", n1, n2, x);
	
	return 0;
}

int promedio (int a, int b){
	
	int suma = 0;
	
	suma = a + b;
	
	return suma;
	
}
