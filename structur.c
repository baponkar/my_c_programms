#include <stdio.h>

/*This program define a structure and use it
 * Builder :  Bapon Kar
 * Date : 13.04.2021
 */

typedef struct item_in_store
{
	int item_code;
	int qty_in_stock;
	float price;
} Item;


int main()
{
	Item soap;
	int no_of_brands = 0;
	float total_soap_value = 0;

	while (soap.item_code != 0)
	{
		scanf("%d %d %f",&soap.item_code,&soap.qty_in_stock,&soap.price);
		total_soap_value += soap.qty_in_stock*soap.price;
		++no_of_brands;
	}

	printf("Number of brands of soap in store = %d\n",no_of_brands);
	printf("Total value of soaps stocked = Rs %f\n",total_soap_value);
}

