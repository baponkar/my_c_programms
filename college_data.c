#include <stdio.h>
/******************************************************************************
 *
 *
 */

typedef struct stud_data
{
	int roll_no;
	char name;
	char dept;
	char course;
	int join_year;
} data;




int main()
{
	data Data[500];
	int i=0;

	//reading data
	while(Data[i].roll_no < 500)
		{
			i++;
			scanf("%d %c %c %c %d",&Data[i].roll_no,&Data[i].name,&Data[i].dept,&Data[i].course,&Data[i].join_year);
		}
	return 0;
}
