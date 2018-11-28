/* Objetivo: Ingresar por teclado el nombre, la edad, y el sexo de de cualquier persona, e imprima solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona. */

#include <stdio.h>

int main (){
	
	char nombre[30], sexo[20];
	int edad;
	
	
	printf ("Introduzca su nombre: ");
	gets (nombre);
	printf ("Es de sexo masculino o femenino: ");
	gets (sexo);
	printf ("Introduzca su edad: ");
	scanf ("%d", &edad);
	
	if ((strcmp(sexo, "masculino")==0) && edad >= 18){
		printf ("Su nombre es: %s", nombre);
		
	}
	else if (strcmp (sexo, "femenino")==0)
		printf ("Su nombre es %s y su sexo es femenino.", nombre);
	
	return 0;
}
