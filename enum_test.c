#include <stdio.h>
#include <math.h>

/* This Program showing the function of enumerated data types
 * Developer : Bapon Kar
 * Date : 12.04.2021
 */

int main()
{
	enum grade {A,B,C,D,F,I};
	enum subject {phy,chem,math,comp,english};
	enum subject course;
	enum grade stud_grade;

	for (course = phy;course <= english;++course)
	{
		printf("%d",course);
	}
}

