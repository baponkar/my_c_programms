#include <stdio.h>
//#include <conio.h>

main() {
	int x = 0;
//	clrscr();

	printf("Enter Choice(1-30 : ");
	scanf("%d",&x);

	if ( x == 1){
		printf("The Choice is 1\n");
		}
	else if ( x == 2){
		printf("The Choice is 2\n");
		}
	else if ( x == 3){
		printf("The choice is 3\n");
		}
	else {
		printf("This is a invalid choice");
		}
}
