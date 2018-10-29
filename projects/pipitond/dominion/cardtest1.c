#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

//Prototyupe not in dominion.h, included here
int cardEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

void cardtest1()
{
	
	int gardenReturn;
	int bonus;
	struct gameState s1;
	
	gardenReturn = cardEffect(gardens, 1, 1, 1, &s1, 1, &bonus);
	
	printf("Garden when called should have a return value  of -1. The return value is %d.\n", gardenReturn);
	if( gardenReturn == -1) printf("-----CARDTEST1-GARDENS IS SUCCESSFUL-----\n");
	else printf("-----CARDTEST1-GARDENS FAILED-----\n");
	
	
}

int main()
{
	printf("\n-----STARTING CARDTEST1:GARDENS-----\n");
	cardtest1();
	printf("-----Finished CARDTEST1:GARDENS-----\n");
}
