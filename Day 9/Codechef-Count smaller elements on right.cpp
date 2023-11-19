void constructLowerArray(int arr[], int* countSmaller, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        countSmaller[i] = 0;
    }
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[i])
                countSmaller[i]++;
        }
    }
}
