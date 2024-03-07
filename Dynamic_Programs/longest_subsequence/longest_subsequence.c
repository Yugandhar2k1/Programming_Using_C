#include<stdio.h>

void longestsubsequence(int *, int); 

void longestsubsequence(int *arr, int n)
{
    int lis[n];
    int max_length = 0;

    for(int i = 0; i < n; i++)
    {
        lis[i] = 1;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
                
            }
        }
        // printf(" %d  ", lis[j]);
    }

    for(int i = 0; i < n; i++)
    {
        if(lis[i] > max_length)
        {
            max_length = lis[i];
        }
    }

    printf("longest subsequence: %d", max_length);
}

int main()
{
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    longestsubsequence(arr, n);

    return 0;
}
