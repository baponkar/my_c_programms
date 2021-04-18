#include <stdio.h>
/*This program convert binary number into decimal number
 * Developer : Baaapon Kar
 * Date : 11.04.2021
 */

int main()
{
	int bin,dec=0,dig=0,temp,two=1;
	printf("enter a binary number : ");
	scanf("%d",&bin);
	
	temp=bin;
	while(temp != 0)
	{
		temp=temp/10;
		dig++;
	}

	for(int i=0;i<dig;++i)
		{
			for(int j=0;j>0;--j)
			{
				two=two*2;
				printf("%d\n",two);
			}

			dec = dec +bin%10* two;
			bin=bin/10;
		}
	printf("The equivalent decimal number is : %d\n",dec);
	return 0;
}

