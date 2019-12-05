/* Classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];

int hand[NUM_CARDS][2];

bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void arrange_hand(void);
void analyze_hand(void);
void print_result(void);


int main(void)
{
    for(;;)
    {
	read_cards();
	arrange_hand();
	analyze_hand();
	print_result();
    }
}

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit, i;
    bool bad_card, duplicate_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS)
	{
	    bad_card = false;
	    duplicate_card = false;

	    printf("Enter a card: ");

	    rank_ch = getchar();
	    switch (rank_ch)
	    {
		case '0':
	    	    exit (EXIT_SUCCESS);
		case '2':
		    rank = 0;
		    break;
		case '3':
		    rank = 1;
		    break;
		case '4':
		    rank = 2;
		    break;
		case '5':
		    rank = 3;
		    break;
		case '6':
		    rank = 4;
		    break;
		case '7':
		    rank = 5;
		    break;
		case '8':
		    rank = 6;
		    break;
		case '9':
		    rank = 7;
		    break;
		case 't': case 'T':
		    rank = 8;
		    break;
		case 'j': case 'J':
		    rank = 9;
		    break;
		case 'q': case 'Q':
		    rank = 10;
		    break;
		case 'k': case 'K':
		    rank = 11;
		    break;
		case 'a': case 'A':
		    rank = 12;
		    break;
		default:
		    bad_card = true;
	    }

	    suit_ch = getchar();
	    switch (suit_ch)
	    {
		case 'c': case 'C':
		    suit = 0;
		    break;
		case 'd': case 'D':
		    suit = 1;
		    break;
		case 'h': case 'H':
		    suit = 2;
		    break;
		case 's': case 'S':
		    suit = 3;
		    break;
		default:
		    bad_card = true;
	    }

	    while ((ch = getchar()) != '\n')
		if (ch != ' ') 
		    bad_card = true;

	    if (bad_card)
		printf("Bad card; ignored.\n");

	    else 
	    {

	    for (i = 0; i < cards_read; i++)
	    {
		if (hand[i][0] == rank && hand[i][1] == suit)
		{
		    duplicate_card = true;
		}

		if (duplicate_card)
		    break;
	    }
	    if (duplicate_card)
		    printf("Duplicate card; ignored.\n");
	    else
	    {
		hand[cards_read][0] = rank;
		hand[cards_read][1] = suit;
		cards_read++;
	    }
	    }
    }
}

void arrange_hand(void)
{
    int i, j, temp_rank, temp_suit, temp_position, min_rank, min_suit;

    for (i = 0; i < NUM_CARDS; i++)
    {
	min_rank = hand[i][0];
	min_suit = hand[i][1];
	temp_position = i;

	for (j = i; j < NUM_CARDS; j++)
	{
	    if (hand[j][0] < min_rank)
	    {
		min_rank = hand[j][0];
		min_suit = hand[j][1];
		temp_position = j;

	    }
	}
	if (temp_position != i)
	{
	    temp_rank = hand[i][0];
	    temp_suit = hand[i][1];

	    hand[i][0] = min_rank;
	    hand[i][1] = min_suit;
	
	    hand[temp_position][0] = temp_rank;
	    hand[temp_position][1] = temp_suit;
	}

    }
}


    void analyze_hand(void)
    {
	int num_consec = 1, count_same = 1, i, j;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	for (i = 0; i < (NUM_CARDS - 1); i++)
	    {
	    if (hand[i][1] == hand[i + 1][1])
		flush = true;
	    else
		flush = false;
	    }

	for (j = 1; j <  NUM_CARDS; j++)
	{
	    if (hand[j][0] == (hand[j - 1][0] + 1))
	    {
		    num_consec++;
	    }
	    else
		break;
        }


	if (num_consec == NUM_CARDS)
	{
	    straight = true;
	    return;
	}

	for (i = 0; i < (NUM_CARDS - 1); i++)
	{
	    if (hand[i][0] == hand[i + 1][0])
	    {
		count_same++;
		pairs++;
		if (count_same == 3)
		    pairs--;
		if (count_same == 4)
		    pairs -= 2;
	    }
	    else
	    {
		count_same = 1;
	    }
	}

	if (count_same == 3)
	    three = true;

	if (count_same == 4)
    	    four = true;
    }
    void print_result(void)
{
    if (straight && flush)
	printf("Straight flush");
    else if (four)
	printf("Four of a kind");
    else if (three && pairs == 1)
	printf("Full house");
    else if (flush)
	printf("Flush");
    else if(straight)
	printf("Straight");
    else if (three)
	printf("Three of a kind");
    else if (pairs == 2)
	printf("Two pairs");
    else if (pairs == 1)
	printf("Pair");
    else
	printf("High card");
    printf("\n\n");
}
