float compute_GPA(char grades[], int n)
{
    int i;
    float sum = 0.0f;

    for(i = 0; i < n; i++)
    {
	switch (grades[i])
	{
	    case 'A': case 'a':
		sum += 1;
	    case 'B': case 'b':
		sum += 1;
	    case 'C': case 'c':
		sum += 1;
	    case 'D': case 'd':
		sum += 1;
	    case 'F': case 'f':
		;
		break;
	}

    }

    return sum / n;
}



