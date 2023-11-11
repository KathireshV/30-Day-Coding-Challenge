int getPairsCount(int arr[], int n, int K)
{
    int count = 0;
     for (int i = 0; i < n; i++)
     {
        for (int j = i + 1; j < n; j++)
        {  
          if (arr[i] + arr[j] == K)
                count++;
        }  
    return count;
}
