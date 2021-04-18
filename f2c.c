#include <stdio.h>

/* Fahrenite to Celcius conversion
 * Writer : Bapon Kar
 */

int main()
{
	float f,c;
	scanf("%f",&f);
	printf("You entered : %f\n",f);

	c = 5*(f - 32)/9;
	printf("Conversion : %f\n",c);
	return 0;
}


