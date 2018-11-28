/*
	Autores: Equipo 6
	Fecha de entrega: 21/11/2018
	Serie 2: Ejercicio 8.
	Objetivo: Escriba una función potenciaInt( base, exponente) que devuelva el valor de su base al
			  exponente dado. Por ejemplo, potenciaInt(3, 4)=3*3*3*3*3 . Suponga que exponente es un
			  entero positivo diferente de cero, y base es un entero. La función potenciaInt debe utilizar for
			  para controlar los cálculos. No utilice las funciones matemáticas de la biblioteca.
*/


#include <stdio.h>

int potenciaInt(int base, int exponente);

int main(){
	
    int base;
	int exponente;
	
    printf("Ingrese el valor de la base que desea elevar: ");
    scanf("%d", &base);
    printf("Ingrese el valor del exponente de la base: ");
    scanf("%d", &exponente);
    printf("Resultado = %d", potenciaInt(base, exponente));
    
    
    return 0;
    
    
}


int potenciaInt(int base, int exponente){
	
	int cont1, resul=1;
    
    for(cont1 = 0; cont1 < exponente; cont1++){
    	
    	
        resul = resul * base;
        
        
    }
    
	return resul;
}
