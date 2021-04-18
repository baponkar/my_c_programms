
/* Builder : Bapon Kar
 * Build Date : 18.04.2021
 * Last Modification : 18.04.2021
 * License : GNU v5.0
 * Downloaded from : https://www.github.com/baponkar
 *
 * This program giving example of pointer .
 * Here *ptr point to integer typed pointer memory location where only integer
 * will be stored.
 * &i gives the value of memory location where i variable be stored.
 * Now here as ptr point to pointer so when we try to introduce ptr = i which
 * means that pointer location will be filled with the content of i. If we wrote
 * ptr = &i then the pointer location content will be the memory location of i.
 * We can introduce typed pointer by int *ptr which store only integer pointer
 * as well as float *i,double *i etc. We can introduce void *i which memory
 * location could be store any kind data.
 ********************************************************************************
 *OUTPUT : 
 ./pointer_data
 
 [1] The value of i : 100
 [2] The value of ptr : 100
 [3] The memory location of i : -38424308
 [4] The memory location of ptr : -38424304
 [5] The value of *&i : 100
 [6] The value of *&ptr : 100

 My machine details :
 OS : Ubuntu 20.04
 GCC : 9.3.0 

 ********************************************************************************
 * Reference : Computer Programming in C by V. Rajaraman,PHI Learning Pvt. Ltd. 
 */

#include <stdio.h>

void main()
{
	int i = 100; //initialise a value of i which autometically pick a memory location which name will be i and stored value 100
	int *ptr; //initialising a pointer memory location which name will be assigned ptr without storing any value.

	ptr = i; //storing the ptr pointer location with the content of i
	
	//This line print the value of i
	printf("[1] The value of i : %d\n",i);
	//This line print the value of ptr location content i.e.the value of ptr
	printf("[2] The value of ptr : %d\n",ptr);
	//This line print the value of memory location of i
	printf("[3] The memory location of i : %d\n",&i);
	//This line print the memory location of pointer ptr
	printf("[4] The memory location of ptr : %d\n",&ptr);
	//this line print the content of memory location i
	printf("[5] The value of *&i : %d\n",*(&i));
	//This line print the content of memory location of ptr
	printf("[6] The value of *&ptr : %d\n",*(&ptr));
}
	       

