int fact(int n)
{
    int i, result = 1;
	for(i = 2; i <= n; i++)
	{
	    result *= i;
	}
    

    return result;
}
