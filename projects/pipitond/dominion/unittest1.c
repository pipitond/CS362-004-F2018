#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

void unittest1(){
	int c1 = 1;
	int c2 = 2;
	int c3 = 3;
	int c4 = 4;
	int c5 = 5;
	int c6 = 6;
	int c7 = 7;
	int c8 = 8;
	int c9 = 9;
	int c10 = 10;

/*	printf("The values that follow are for cards, each value is the card number\n");
	printf("%d\n", c1);
	printf("%d\n", c2);
	printf("%d\n", c3);
	printf("%d\n", c4);
	printf("%d\n", c5);
	printf("%d\n", c6);
	printf("%d\n", c7);
	printf("%d\n", c8);
	printf("%d\n", c9);
	printf("%d\n", c10);
*/
	int* k;
	k = kingdomCards(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10);
	
	printf("---The deck conists of the following cards.---\n");

	int i;
	for( i = 0; i < 10; i++)
	{
		printf("card number %d: is card%d\n", i+1, k[i]); //print the values at each location in the array
		if(i+1 == k[i]){
			printf("---TEST SUCCESSFUL---\n");
		}
		else
			printf("---TEST FAILED---\n");
	}
}


int main()
{
	printf("\n----------STARTING TEST FOR KINGDOMCARDS()----------\n");
	unittest1();
	printf("----------TEST FINISHED FOR KINGDOMCARDS()----------\n");
	return 0;
}
