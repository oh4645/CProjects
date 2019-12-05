#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#define DICE_FACES_1 6
#define DICE_FACES_2 6

int main(void)
{
    char cont;
    bool end;
    int win_count = 0, lose_count = 0;

    srand((unsigned) time(NULL));
    int roll_dice(void)
    {
	int dice1, dice2;

	dice1 = (rand() % DICE_FACES_1) + 1;
	dice2 = (rand() % DICE_FACES_2) + 1;
    return dice1 + dice2;
    }

    bool play_game(void)
    {
	int n = 0, dice_sum, point;
	for(;;)
	{
	    dice_sum = roll_dice();
	    printf("You rolled %d\n", dice_sum);
	    n++;
	    if (n == 1)
	    {
		if (dice_sum == 2 || dice_sum == 3 || dice_sum == 12)
		{
		    printf("You lose!\n");
		    
		    return false;
		}
		if (dice_sum == 7 || dice_sum == 11)
		{
		    printf("You win!\n");

		    return true;
		}
		point = dice_sum;
		printf("Your point is %d\n", dice_sum);
	    }
	    
	    if (n >= 2)
	    {
		if (dice_sum == point)
		{
		    printf("You win!\n");
		    return true;
		}
		if (dice_sum == 7)
		{
		    printf("You lose!\n");
		    return false;
		}
	    }
	}
    }

    for(;;)
    {	
	end = false;
	if (play_game())
	{
	    win_count++;
	}
	else
	    lose_count++;

	printf("Play again? ");
	scanf(" %c", &cont);

	if(cont == 'y' || cont == 'Y')
	    ;
	else
	{
	    printf("Wins: %d  Losses: %d\n", win_count, lose_count);
	    end = true;
	}
	if (end)
	    break;
    }

    return 0;
}
