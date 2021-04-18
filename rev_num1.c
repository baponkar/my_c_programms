#include <stdio.h>
/*Take any numbeer and make the digit reverse
 * Developer : Bapon Kar
 */

int main()
{
	int num,temp,dig = 0,rev_num=0,pow=1,i;

	printf("Enter a number :");
	scanf("%d",&num);
	
	temp = num;
	while (temp != 0)
	{
		temp = temp/10;
		dig++;
	}

	printf("The digit of the entered number is : %d\n",dig);

	for (i = 0;i < dig;i++)
	{
		rev_num = rev_num*10 + num % 10;
		num = num/10;
	}

	printf("The reverse number is : %d\n",rev_num);
}


