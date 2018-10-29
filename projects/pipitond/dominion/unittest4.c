#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

void unittest4()
{

	struct gameState s1;
	int totalCards;
	
	s1.deckCount[1] = 1;
	s1.deck[1][0] = 1;
	s1.handCount[1] = 6;
	s1.hand[1][0] = 1;
	s1.hand[1][1] = 1;
	s1.hand[1][2] = 1;
	s1.hand[1][3] = 1;
	s1.hand[1][4] = 1;
	s1.hand[1][5] = 1;
	s1.discardCount[1] = 0;
	s1.discard[1][0] = 0;
	
	totalCards = fullDeckCount(1, 0, &s1);
	
	printf("Test should have 7 cards. There are %d/7 cards in the entire player deck\n", totalCards);
	if( totalCards == 7)printf("-----UNIT TEST 4 SUCCESSFUL----\n-");
	else printf("-----UNIT TEST 4 FAILED-----\n");

}

int main()
{
	printf("\n-----UnitTest 4-fullDeckCount()-----\n");
	unittest4();
	printf("----Finished UnitTest 4-fullDeckCount()----\n");
}
