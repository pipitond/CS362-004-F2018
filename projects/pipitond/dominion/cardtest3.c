#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

//Prototyupe not in dominion.h, included here
int cardEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

void cardtest3()
{
	
	int smithyReturn;
	int bonus;
	int handpos = 0;
	struct gameState s1;
	s1.whoseTurn = 1;
	s1.handCount[1] = 1; //test uses a single players hand with a single outpost card
	int originalHandCount = s1.handCount[1];
	s1.hand[1][0] = smithy;
	s1.discardCount[1] = 0; // no cards have been discarded
	s1.deckCount[1] = 4;
	s1.deck[1][0] = 1;
	s1.deck[1][1] = 1;
	s1.deck[1][2] = 1;
	s1.deck[1][3] = 1;
	
	
	printf("handcount: %d -- hand: %d \n", s1.handCount[1], s1.hand[1][0]);
	
	smithyReturn = cardEffect(smithy, 1, 1, 1, &s1, handpos, &bonus);
	//outpost calls discardCard which is not tested by this unit test, it should be unit tested separately
	
	printf("handcount: %d -- hand: %d \n", s1.handCount[1], s1.hand[1][0]);

	//originalHandCount is used to make sure that smithy increases hand count. Smithy draws three but discards 2, resulting in net gain of 2.
	//originalHandCount + 2 is currently used to test the netgain of the smithy card 
	if((smithyReturn == 0) && (s1.handCount[1] == originalHandCount + 2)) printf("-----CARDTEST3-SMITHY IS SUCCESSFUL-----\n");
	else printf("-----CARDTEST3-SMITHY FAILED-----\n");
	
	
}

int main()
{
	printf("\n-----STARTING CARDTEST3:SMITHY-----\n");
	cardtest3();
	printf("-----Finished CARDTEST3:SMITHY-----\n");
}
