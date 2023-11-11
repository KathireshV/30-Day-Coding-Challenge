void printTwoElements(int arr[], int n)
{
    int temp[n] = {};
    int missingNumber=-1;
    int repeatingNumber=-1;
    for (int i = 0; i < n; i++)
    {
        temp[arr[i]-1]++;
        if (temp[arr[i] - 1] > 1) 
        {
            repeatingNumber = arr[i];
        }
    }
    for (int i = 0; i < n; i++) 
    {
        if (temp[i] == 0) 
        {
            missingNumber = i + 1;
            break;
        }
    }
    cout << "The repeating number is " << repeatingNumber<<"."<< endl;
    cout << "The missing number is " << missingNumber<<"."<< endl;
}
