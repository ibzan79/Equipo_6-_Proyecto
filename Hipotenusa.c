#include <stdio.h>
#include <math.h>

int main (){
	
	float hipotenusa, cateto1, cateto2;
	
	printf ("Digite los dos catetos: ");
	scanf ("%f %f", &cateto1, &cateto2);
	
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	
	printf("La hipotenusa es: %f", hipotenusa);
	
	
	return 0;
}
