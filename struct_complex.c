#include <stdio.h>

/****************************************************************************
 * Complex number by using struct
 * Developer : Bapon Kaar
 * Building Date : 13.04.2021
 *
 * **********************************************************************
 */


typedef struct complex_number
{
	float real;
	float img;
} Complex;

Complex sum(Complex m, Complex n);
Complex product(Complex m,Complex n);


int main()
{
	Complex x,y,z,p,q,r,d,e,f;
	scanf("%f %f %f %f",&x.real,&x.img,&y.real,&y.img);

	//Sum of Complex number x and y
	z = sum(x,y);
	printf("SUm of complex number x and y\n");
	printf("%f + i%f\n",z.real,z.img);

	//Product of complex number x and y
	p = product(x,y);
	printf("The Product of x and y :%f+i%f\n",p.real,p.img);
}

Complex sum(Complex m, Complex n)
{
	Complex p;
	p.real = m.real + n.real;
	p.img = m.img + n.img;
	return p;
}

Complex product(Complex m, Complex n)
{
	Complex p;
	p.real = m.real*m.real - m.img*n.img;
	p.img = m.real*n.img + m.img*n.real;

	return p;
}

