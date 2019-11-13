int evaluate_position(char board[8][8])
{
    int i, value = 0;

    for(i = 0; i < 8; i++)
    {
	switch (board[i][i])
	{
	    case 'Q':
		value += 9;
	    break;
	    
	    case 'R':
		value += 5;
	    break;

	    case 'B': case 'N':
		value += 3;
	    break;

	    case 'P':
		value++;
	    break;

	    case 'q':
		black -= 9;
	    break;

	    case 'r':
		value -= 5;
	    break;
	    
	    case 'b': case 'n':
		value -= 3;
	    break;
    
	    case 'p':
		value--;
	    break;
	}
    }
    return value;
}    
