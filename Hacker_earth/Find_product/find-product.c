/***************************************************************************************************
Problem
You have been given an array A of size N consisting of positive integers. 
You need to find and print the product of all the number in this array Modulo 

Input Format: 
The first line contains a single integer N denoting the size of the array.
The next line contains N space separated integers denoting the elements of the array
5
1 2 3 4 5

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 10^9 + 7
120
*****************************************************************************************************/
#include <stdio.h>
#define MOD 1000000007
void main() 
{
    long long int N, result = 1;
    printf("Enter the arr size: ");
    scanf("%lld", &N);
    printf("Enter the arr values:  ");
    long long int arr[N]; 
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        result = (result * arr[i])% MOD;
    }

    printf("Mod value: %lld", result);
}
