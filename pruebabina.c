#include <stdio.h>
#define BITS 16

int main() {

int binNum[16];
int decNumElement;
int counter;

printf("\n\Ingresa el número: ");
scanf( "%d", &decNumElement );
for ( counter = 0; counter <= BITS; counter++ ) {
binNum[counter] = decNumElement % 2;
decNumElement = decNumElement / 2;
}
//Aqui invierto la cadena de 1´s y 0´s   
for ( counter = BITS; counter >= 0; counter-- ) {
printf("%d", binNum[counter]);
}
return 0;
}
