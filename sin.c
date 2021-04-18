#include <stdio.h>
#include <math.h>

/*This program find the value of sinX for value angle X in radian
 * Developer : Bapon Kar
 * Date : 12.04.2021
 */

int fact(int n)
{
	int res = 1;
	for (int i=1;i<n+1;++i)
	{
		res = res*i;
	}

	if(n == 0)
	{
		return 1;
	}
	else
	{
		return res;
	}
}



float Sin(float x)
{
	float res=0,temp=1;

	for (int i=0;i<10;++i)
	{
		for(int j=0;j<i;++j)
		{
			temp = temp*x;
		}
		
		printf("%d\n",fact(2*i+1));
		temp = temp*fact(2*i+1);
		if(i%2 != 0){
			temp = temp*(-1);
		}
		//printf("%f\n",temp);
		res = res + temp;
	}

	return res;
}

int main()
{
	float angle;
	printf("Enter a value of angle in degree : ");
	scanf("%f",&angle);
	float temp = angle*3.1414/180;
	
	float result =	Sin(temp);
	printf("%f\n",result);
	
	printf("%d\n",fact(5));

	return 0;
}

