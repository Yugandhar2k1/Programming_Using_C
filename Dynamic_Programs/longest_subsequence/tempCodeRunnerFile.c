#include<stdio.h>

int longestsubsequence(int arr[], int n);

int longestsubsequence(int arr[], int n) 
{
    // initalizing one array to store longest subsequence
    int lis[n];
    int max_length = 0;

    // assign value 1 to that lis
    for(int i = 0; i < n; i++) {
        lis[i] = 1;
    }

    // apply bottom-up in dynamic porgramming 
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1; // updating the length of the longest subsequence  
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(lis[i] > max_length) {
            max_length = lis[i];
        }
    }

    return max_length;
}

int main() {
    int arr[] = {30,10,2,1,20,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int length = longestsubsequence(arr, n);
    printf("The length of longest subsequence: %d\n", length);

    return 0;
}
