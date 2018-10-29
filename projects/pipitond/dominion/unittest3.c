#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

void unittest3()
{
	//create 4 different game states. There will be 4 states, the first two it is Player 1's turn, second two is Player 2's turn.
	//The first in each set will have 5 cards, the second will have 10.
	struct gameState s1, s2, s3, s4;

	//Initialize player 1 for 5 and 10 cards
	s1.whoseTurn = 1;
	s1.handCount[1] = 5;

	s2.whoseTurn = 1;
	s2.handCount[1] = 10;

	//Initialize player 2 for 5 and 10 cards
	s3.whoseTurn = 2;
	s3.handCount[2] = 5;

	s4.whoseTurn = 2;
	s4.handCount[2] = 10;


	int test1Player, test2Player, test3Player, test4Player, test1HandCount, test2HandCount, test3HandCount, test4HandCount;

	//test each state in numHandCards and print results
	test1Player = whoseTurn(&s1);
	test1HandCount = numHandCards(&s1);
	printf("It is Player %d's turn and they have %d cards\n", test1Player, test1HandCount);
	if((test1Player == 1) && (test1HandCount == 5))
	{
		printf("-----Test 1 Successful-----\n");
	}
	else printf("-----Test 1 Failed-----\n");

	test2Player = whoseTurn(&s2);
	test2HandCount = numHandCards(&s2);
	printf("It is Player %d's turn and they have %d cards\n", test2Player, test2HandCount);
	if((test2Player == 1) && (test2HandCount == 10))
	{
		printf("-----Test 2 Successful-----\n");
	}
	else printf("-----Test 2 Failed-----\n");

	test3Player = whoseTurn(&s3);
	test3HandCount = numHandCards(&s3);
	printf("It is Player %d's turn and they have %d cards\n", test3Player, test3HandCount);
	if((test3Player == 2) && (test3HandCount == 5))
	{
		printf("-----Test 3 Successful-----\n");
	}
	else printf("-----Test 3 Failed-----\n");

	test4Player = whoseTurn(&s4);
	test4HandCount = numHandCards(&s4);
	printf("It is Player %d's turn and they have %d cards\n", test4Player, test4HandCount);
	if((test4Player == 2) && (test4HandCount == 10))
	{
		printf("-----Test 4 Successful-----\n");
	}
	else printf("-----Test 4 Failed-----\n");

}


int main()
{
	printf("\n-----Unit Test for numHandCards() starting-----\n");
	unittest3();
	printf("-----Unit test for numHandCards() completed-----\n");
	return 0;
}
