void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    if (a[0] > a[1])
    {
	*largest = a[0];
	*second_largsest = [a1];
    }
    else
    {
	*largest = a[1];
	*second_largest = a[0];
    }
    
    for(i = 2; i < n; i++)
    {
	if (*largest < a[i])
	{
	    *second_largest = *largest;
	    *largest = a[i];
	}
	else if (*second_largest < a[i])
	{
	    *second_largest = a[i]
	}
    }
}

    
