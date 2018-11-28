/* Autor: Javier Ibzan Davila Osorio
   Fecha: 15-09-2018
   Objetivo: Estructuras selectivas
   Pedir tres numeros al usuario y decirle cual es el mayor y cual es el menor.
*/

#include <stdio.h>

int main (){
	int n1;
	int n2;
	int n3;
	int mayor;
	int menor;
	
	printf ("Introduce el primer numero entero: ", n1);
	scanf ("%d", &n1);
	printf ("Introduce el segundo numero entero: ", n2);
	scanf ("%d", &n2);
	printf ("Introduce el tercer numero entero: ", n3);
	scanf ("%d", &n3);
	
	if (n1 > n2){
	    if (n1 > n3){
	        mayor = n1;
    }
	    else {
		    mayor = n3;
	     } 
    }
    else {
    	if (n2 > n3){
    		mayor = n2;
		}
		else {
			mayor = n3
		}
		
	}
	
	printf ("El mayor de los tres numeros es: %d", mayor);
    
    
    
    
    
	   return 0;
	   
}
