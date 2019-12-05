int *find_largest(int a[], int n)
{
    int *largest, i;
    
    largest = &a[0];

    for(i = 1; i < n; i++)
    {
	if (*largest < a[i])
	{
	    *largest = a[i];
	}
    }
    return largest;
}

