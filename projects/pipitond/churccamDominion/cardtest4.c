#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

//Prototyupe not in dominion.h, included here
int cardEffect(int card, int choice1, int choice2, int choice3, struct gameState *state, int handPos, int *bonus);

void cardtest4()
{
	int bonus = 1;
	struct gameState s1;
	s1.whoseTurn = 1;
	s1.handCount[1] = 1; //test uses a single players hand with a single outpost card
	s1.hand[1][0] = adventurer;
	s1.deckCount[1] = 5;
	s1.discardCount[1] = 0;
	s1.deck[1][0] = copper;
	s1.deck[1][1] = gardens;
	s1.deck[1][2] = silver;
	s1.deck[1][3] = gardens;
	s1.deck[1][4] = gold;

	
	cardEffect(adventurer, 1, 1, 1, &s1, 1, &bonus);
	
	printf("handCount: %d -- discardCount: %d -- deckCount: %d \n", s1.handCount[1], s1.discardCount[1], s1.deckCount[1]);
	printf("Hand: %d, %d, %d, %d, %d Discard: %d, %d, %d, %d, %d Deck: %d, %d, %d, %d, %d\n", s1.hand[1][0], s1.hand[1][1], 
			s1.hand[1][2], s1.hand[1][3], s1.hand[1][4], s1.discard[1][0], s1.discard[1][1], s1.discard[1][2],
			s1.discard[1][3], s1.discard[1][4], s1.deck[1][4], s1.deck[1][3], s1.deck[1][2], s1.deck[1][1],
			s1.deck[1][0]);
	
	printf("The hand should only include a gold(6) and a silver(5). The discard should contain adventurer(7) and a gardens(10). The deck should contain gardens(10) and copper(5).\n"); 
	printf("\n");

	struct gameState s2;
	s2.whoseTurn = 1;
	s2.handCount[1] = 1; //test uses a single players hand with a single outpost card
	s2.hand[1][0] = adventurer;
	s2.deckCount[1] = 5;
	s2.discardCount[1] = 0;
	s2.deck[1][0] = silver;
	s2.deck[1][1] = gardens;
	s2.deck[1][2] = gold;
	s2.deck[1][3] = gardens;
	s2.deck[1][4] = copper;
	
	cardEffect(adventurer, 1, 1, 1, &s2, 1, &bonus);
	
	printf("handCount: %d -- discardCount: %d -- deckCount: %d \n", s2.handCount[1], s2.discardCount[1], s2.deckCount[1]);
	printf("Hand: %d, %d, %d, %d, %d Discard: %d, %d, %d, %d, %d Deck: %d, %d, %d, %d, %d\n", s2.hand[1][0], s2.hand[1][1], 
			s2.hand[1][2], s2.hand[1][3], s2.hand[1][4], s2.discard[1][0], s2.discard[1][1], s2.discard[1][2],
			s2.discard[1][3], s2.discard[1][4], s2.deck[1][4], s2.deck[1][3], s2.deck[1][2], s2.deck[1][1],
			s2.deck[1][0]);
	
	printf("The hand should only include a copper(5) and a gold(6). The discard should contain adventurer(7) and a gardens(10). The deck should contain gardens(10) and silver(5).\n"); 
	printf("\n");

	struct gameState s3;
	s3.whoseTurn = 1;
	s3.handCount[1] = 1; //test uses a single players hand with a single outpost card
	s3.hand[1][0] = adventurer;
	s3.deckCount[1] = 5;
	s3.discardCount[1] = 0;
	s3.deck[1][0] = gold;
	s3.deck[1][1] = gardens;
	s3.deck[1][2] = copper;
	s3.deck[1][3] = gardens;
	s3.deck[1][4] = silver;
	
	cardEffect(adventurer, 1, 1, 1, &s3, 1, &bonus);
	
	printf("handCount: %d -- discardCount: %d -- deckCount: %d \n", s3.handCount[1], s3.discardCount[1], s3.deckCount[1]);
	printf("Hand: %d, %d, %d, %d, %d Discard: %d, %d, %d, %d, %d Deck: %d, %d, %d, %d, %d\n", s3.hand[1][0], s3.hand[1][1], 
			s3.hand[1][2], s3.hand[1][3], s3.hand[1][4], s3.discard[1][0], s3.discard[1][1], s3.discard[1][2],
			s3.discard[1][3], s3.discard[1][4], s3.deck[1][4], s3.deck[1][3], s3.deck[1][2], s3.deck[1][1],
			s3.deck[1][0]);
	
	printf("The hand should only include a silver(5) and a copper(5). The discard should contain adventurer(7) and a gardens(10). The deck should contain gardens(10) and gold(6).\n"); 
	printf("\n");
	
	
}

int main()
{
	printf("\n-----STARTING CARDTEST4:Adventurer-----\n");
	cardtest4();
	printf("-----Finished CARDTEST4:Adventurer-----\n");
}
