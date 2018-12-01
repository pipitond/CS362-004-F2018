#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"

void unittest2()
{
	//create four different game states. One where each player (1-4) is the current player. 
	struct gameState s1;
	struct gameState s2;
	struct gameState s3;
	struct gameState s4;

	int test1, test2, test3, test4;

	//player 1's turn
	s1.whoseTurn = 1;

	//player 2's turn
	s2.whoseTurn = 2;

	//player 3's turn
	s3.whoseTurn = 3;

	//player 4's turn
	s4.whoseTurn = 4;

	//test whoseTurn and print results
	test1 = whoseTurn(&s1);
	if(test1 == 1) 
	{
		printf("It should be Player 1's turn. It is Player %d's turn.\n", test1);
		printf("-----TEST 1 SUCCESSFUL-----\n");	
	}
	else printf("-----TEST 1 failed-----\n");

	test2 = whoseTurn(&s2);
	if(test2 == 2) 
	{
		printf("It should be Player 2's turn. It is Player %d's turn.\n", test2);
		printf("-----TEST 2 SUCCESSFUL-----\n");	
	}
	else printf("-----TEST 2 failed-----\n");

	test3 = whoseTurn(&s3);
	if(test3 == 3) 
	{
		printf("It should be Player 3's turn. It is Player %d's turn.\n", test3);
		printf("-----TEST 3 SUCCESSFUL-----\n");	
	}
	else printf("-----TEST 3 failed-----\n");

	test4 = whoseTurn(&s4);
	if(test4 == 4) 
	{
		printf("It should be Player 4's turn. It is Player %d's turn.\n", test4);
		printf("-----TEST 4 SUCCESSFUL-----\n");	
	}
	else printf("-----TEST 4 failed-----\n");

}

int main()
{
	printf("\n-----Unit Test for whoseTurn() starting-----\n");
	unittest2();
	printf("-----Unit test for whoseTurn() completed-----\n");
	return 0;
}
