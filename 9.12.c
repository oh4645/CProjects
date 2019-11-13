double inner_product(double a[], double b[], int n)
{
    int i;
    double sum = 0.0lf;
    for(i = 0; i < n; i++)
    {
	sum += a[i] * b[i];
    }
    return sum;
}


