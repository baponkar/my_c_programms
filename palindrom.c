#include <stdio.h>
#include <math.h>


int main()
{

	int n,r_n;
	printf("Enter a integer : ");
	scanf("%d",&n);
	r_n = rev_no(n);
	if (n == r_n)
	{
		printf("This is a Palindrome number!\n");
	}
	else
	{
		printf("This is not a Palindrom number.\n");
	}


	return 0;
}

int rev_no(int n)
{
	int dig,temp,rev=0;
	while (n != 0)
	{
		dig = n % 10;
		rev = rev*10 + dig;
		n = n/10;
	}

	return rev;

}


