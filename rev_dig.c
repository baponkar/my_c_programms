#include <stdio.h>
/*Reverse the digit of entered nmber*/

int main()
{
	int num,rev_num = 0,dig1,dig2,dig3,dig4,dig5,temp;
	printf("Enter a five digit number\n");
	scanf("%d",&num);

	
	dig1 = num % 10;
	dig2 = (num/10)%10;
	dig3 = (num/100)%10;
	dig4 = (num/1000)%10;
	dig5 = (num/10000);
	rev_num = dig1*10000+dig2*1000+dig3*100+dig4*10+dig5;

	printf("Reverse number is : %d\n",rev_num);

	return 0;
}
