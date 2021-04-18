#include <stdio.h>
/* This program count total number of positive,negative and zero numbers entered
 * Developer : Bapon Kar
 * Date : 11.04.2021
 */

int main()
{


	int num,pos=0,neg=0,zer=0;
	do
	{
		if (num > 0)
		{
			pos++;
		}
		else if(num < 0)
		{
			neg++;
		}
		else if (num == 0)
		{
			zer++;
		}
	}

	while(scanf("%d",&num) != EOF);

	printf("Total Positive number enterd:%d",pos);
	printf("Total Negative number entered : %d",neg);
	printf("Total Zero entered : %d",zer);
	return 0;
}

