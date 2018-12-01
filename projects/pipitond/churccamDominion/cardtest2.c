#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

//Prototyupe not in dominion.h, included here
int cardEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

void cardtest2()
{
	
	int outpostReturn;
	int bonus;
	int handpos = 0;
	struct gameState s1;
	s1.whoseTurn = 1;
	s1.outpostPlayed = 0;
	s1.handCount[1] = 1; //test uses a single players hand with a single outpost card
	s1.hand[1][0] = outpost;
	s1.discardCount[1] = 0; // no cards have been discarded
	
	printf("handcount: %d -- outpostPlayed: %d -- hand: %d \n", s1.handCount[1], s1.outpostPlayed, s1.hand[1][0]);
	
	outpostReturn = cardEffect(outpost, 1, 1, 1, &s1, handpos, &bonus);
	//outpost calls discardCard which is not tested by this unit test, it should be unit tested separately
	
	printf("handcount: %d -- outpostPlayed: %d -- hand: %d \n", s1.handCount[1], s1.outpostPlayed, s1.hand[1][0]);

	if((outpostReturn == 0) && (s1.outpostPlayed == 1) && (s1.handCount[1] == 0)) printf("-----CARDTEST2-OUTPOST IS SUCCESSFUL-----\n");
	else printf("-----CARDTEST2-OUTPOST FAILED-----\n");
	
	
}

int main()
{
	printf("\n-----STARTING CARDTEST2:OUTPOST-----\n");
	cardtest2();
	printf("-----Finished CARDTEST2:OUTPOST-----\n");
}
