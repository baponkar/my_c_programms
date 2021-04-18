/*This program finding number of A in a string
 * Developer : Bapon Kar
 * Date : 15.04.2021
 */

#include <stdio.h>

void read_line(char s[]);
void print_line(char s[]);

int main()
{
	char buffer[81];
	read_line(buffer);
	print_line(buffer);
	



	return 0;
}

void read_line(char string[])
{
	int i = 0;
	string[i] = getchar();

	while (string[i] != '\n')
	{
		string[++i] = getchar();
	}

	if(i == 0)
	{
		printf("Empty string\n");
		return;
	}
	string[i] = "\0";

	return;
}


void print_line(char out_string[])
{
	int i =0;
	while( out_string[i] != "\0")
	{
		putchar(out_string[i]);
		++i;
	}
}

