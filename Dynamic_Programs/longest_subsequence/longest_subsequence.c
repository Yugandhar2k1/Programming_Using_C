#include<stdio.h>

void longestsubsequence(int *, int); 

void longestsubsequence(int *arr, int n)
{
    int lis[n];
    int prev_index[n]; // To store the previous index of each element in the LIS
    int max_length = 0;
    int end_index = 0;

    // Initialize lis and prev_index arrays
    for(int i = 0; i < n; i++)
    {
        lis[i] = 1;
        prev_index[i] = -1; // Initialize to -1 indicating no previous index
    }

    // Dynamic Programming approach to find the length of the LIS
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
                prev_index[i] = j; // Update the previous index
            }
        }
        // Update the end index with the index having maximum LIS
        if (lis[i] > lis[end_index])
        {
            end_index = i;
        }
    }

    // Find the maximum length of the LIS
    max_length = lis[end_index];

    // Print the length of the longest increasing subsequence
    printf("Length of the longest increasing subsequence: %d\n", max_length);

    // Print the longest increasing subsequence in ascending order
    printf("Longest increasing subsequence: ");
    int index = end_index;
    while (index != -1)
    {
        printf("%d ", arr[index]);
        index = prev_index[index]; // Move to the previous index
    }
}

int main()
{ 
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    longestsubsequence(arr, n);

    return 0;
}
