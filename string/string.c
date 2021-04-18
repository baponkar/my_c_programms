/* This program read a string and print the string
 * Developer : Bapon Kar
 * Date : 15.04.2021
 */

#include <stdio.h>

int main()
{
	char my_string[100];
	printf("Enter a string : ");
	scanf("%s",&my_string); //This only take before of space,new line etc
	printf("This is your string : %s\n",my_string);


	printf("Enter your name with surname : ");
	fgets(my_string,sizeof(my_string),stdin); //accept string
	printf("You entered : ");
	puts(my_string); //display string
	
	return 0;
}

