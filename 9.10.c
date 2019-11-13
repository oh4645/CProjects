//(a)
int largest_element(int a[], int n)
{
    int i, max = a[0];

    for(i = 1; i < n; i++)
    {
	if (max < a[i])
	{
	    max = a[i];
	}
    }
    return max;
}

//(b)
int elements_average(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
	sum += a[i];
    }

    return sum / n;
}

//(c)
int positive_element_count(int a[], int n)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
	if (a[i] > 0)
	    count++;
    }
    return count;
}


