/**
 * @file rock-spock.c
 * @author Donovan Griego
 * @date September 14, 2020
 * @brief Play Rock-paper-scissors-lizard-Spock against the machine
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define COMPUTER 8088
#define PLAYER 1000

#define CHOICES 5

#define ROCK 'R'
#define PAPER 'P'
#define SCISSORS 'S'
#define LIZARD 'L'
#define SPOCK 'V'

void move(int who, int move);
int winner(int computer, int player);
void print_winner(int winner, int comp_move, int player_move);
int nrand(int range);
void seed();


int main(void)
{
	int computer;
	int player;
    int tmp;

	/* set up the seed value for the random number generator */
	/* call only once */
	seed();

    /* todo - add a while loop to keep playing */
	while(1 == 1)
	{
		printf("Enter a move:\n");
		printf("R for ROCK\n");
		printf("P for PAPER\n");
		printf("S for SCISSORS\n");
		printf("L for LIZARD\n");
		printf("V for SPOCK\n");
		printf("Q to have SPOCK eat a ROCK while chasing a LIZARD and quit\n");
		printf("Move: ");
		while ((tmp = getchar()) != '\n')
			player = tmp;

		switch(player)
		{
			case 'R':
			case 'P':
			case 'S':
			case 'L':
			case 'V':
				break;
			case 'Q':
				exit(0);
				break;
			default:
				printf("Please enter a valid character! Press enter to try again...");
				getchar();
				continue;
		}

		/* debug -- you don't need move() to play game  */
		move(PLAYER, player);

		/* generate random number for computers play */
		switch(nrand(CHOICES)) {
		case 1:
				computer = ROCK;
				break;
		case 2:
				computer = PAPER;
				break;
		case 3:
				computer = SCISSORS;
				break;
		case 4:
				computer = LIZARD;
				break;
		case 0:
				computer = SPOCK;
				break;
		}

		/*debug -- you don't need this to play the game */
		move(COMPUTER, computer);

		print_winner(winner(computer, player), computer, player);
		
		printf("Press enter to continue...");
		getchar();
	}

	return 0;
}


/** prints the player's or computer's  move to stdin
 * used in debugging
 * @param who is it the computer or the player's move?
 * @param move what move did they make
 * @return void
 */
void move(int who, int move)
{
	if (who == COMPUTER)
		printf("Computer's play is ");
	else
		printf("Player's play is ");


	switch(move) {
	case ROCK:
		printf("ROCK\n");
		break;
	case PAPER:
		printf("PAPER\n");
		break;
	case SCISSORS:
		printf("SCISSORS\n");
		break;
	case SPOCK:
		printf("SPOCK\n");
		break;
	case LIZARD:
		printf("LIZARD\n");
		break;
    	}
}


/**
 * determines the winner either COMPUTER or PLAYER
 * @param computer the computer's move
 * @param player the player's move
 * @return the winner of the game
 */
int winner(int computer, int player)
{
	/* todo - determine the winner; use switch statements */

	switch(player)
	{
		case 'R':
			switch(computer)
			{
				case 'L':
				case 'S':
					return PLAYER;
					break;
				case 'V':
				case 'P':
					return COMPUTER;
					break;
				default:
					return 0;
			}
			break;
		case 'P':
			switch(computer)
			{
				case 'S':
				case 'L':
					return COMPUTER;
					break;
				case 'V':
				case 'R':
					return PLAYER;
					break;
				default:
					return 0;
			}
			break;
		case 'S':
			switch(computer)
			{
				case 'V':
				case 'R':
					return COMPUTER;
					break;
				case 'L':
				case 'P':
					return PLAYER;
					break;
				default:
					return 0;
			}
			break;
		case 'V':
			switch(computer)
			{
				case 'P':
				case 'L':
					return COMPUTER;
					break;
				case 'S':
				case 'R':
					return PLAYER;
					break;
				default:
					return 0;
			}
			break;
		case 'L':
			switch(computer)
			{
				case 'S':
				case 'R':
					return COMPUTER;
					break;
				case 'V':
				case 'P':
					return PLAYER;
					break;
				default:
					return 0;
			}
			break;
		default:
			return 0;	//impossible case
	}
}

/**
 * prints the winner of the game to stdin
 * @param winner who won the computer or player
 * @param comp_move what move did the computer make
 * @param play_move what move did the player make
 * @return void
 */
void print_winner(int winner, int comp_move, int player_move)
{
	switch(player_move)
	{
		case 'R':
			switch(comp_move)
			{
				case 'L':
					printf("Rock crushes lizard. Player Wins!\n");
					break;
				case 'S':
					printf("Rock crushes scissors. Player Wins!\n");
					break;
				case 'V':
					printf("Spock vaporizes rock. Computer Wins!\n");
					break;
				case 'P':
					printf("Paper covers rock. Computer Wins!\n");
					break;
				default:
					printf("It's a tie! No Winner!\n");
			}
			break;
		case 'P':
			switch(comp_move)
			{
				case 'S':
					printf("Scissors cuts paper. Computer Wins!\n");
					break;
				case 'L':
					printf("Lizard eats paper. Computer Wins!\n");
					break;
				case 'V':
					printf("Paper disproves spock. Player Wins!\n");
					break;
				case 'R':
					printf("Paper covers rock. Player Wins!\n");
					break;
				default:
					printf("It's a tie! No Winner!\n");
			}
			break;
		case 'S':
			switch(comp_move)
			{
				case 'V':
					printf("Spock smashes scissors. Computer Wins!\n");
					break;
				case 'R':
					printf("Rock crushes scissors. Computer Wins!\n");
					break;
				case 'L':
					printf("Scissors decapitates lizard. Player Wins!\n");
					break;
				case 'P':
					printf("Scissors cuts paper. Player Wins!\n");
					break;
				default:
					printf("It's a tie! No Winner!\n");
			}
			break;
		case 'V':
			switch(comp_move)
			{
				case 'P':
					printf("Paper disproves spock. Computer Wins!\n");
					break;
				case 'L':
					printf("Lizard poisons spock. Computer Wins!\n");
					break;
				case 'S':
					printf("Spock smashes scissors. Player Wins!\n");
					break;
				case 'R':
					printf("Spock vaporizes rock. Player Wins!\n");
					break;
				default:
					printf("It's a tie! No Winner!\n");
			}
			break;
		case 'L':
			switch(comp_move)
			{
				case 'S':
					printf("Scissors decapitates lizard. Computer Wins!\n");
					break;
				case 'R':
					printf("Rock crushes lizard. Computer Wins!\n");
					break;
				case 'V':
					printf("Lizard poisons spock. Player Wins!\n");
					break;
				case 'P':
					printf("Lizard eats paper. Player Wins!\n");
					break;
				default:
					printf("It's a tie! No Winner!\n");
			}
			break;
		default:
			printf("Error! Impossible case!\n");	//impossible case
	}
}

/**
 * returns a uniform random integer n, between 0 <= n < range
 * @param range defines the range of the random number [0,range)
 * @return the generated random number
 */
int nrand(int range)
{
	return rand() % range;
}

/**
 * call this to seed the random number generator rand()
 * uses a simple seed -- the number of seconds since the epoch
 * call once before using nrand and similar functions that call rand()
 */
void seed(void)
{
  	srand((unsigned int)time(NULL));
}
