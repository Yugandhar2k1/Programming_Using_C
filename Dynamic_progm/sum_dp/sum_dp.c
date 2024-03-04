#include<stdio.h>
#include<string.h>

int dpsum(int n);

int dpsum(int n)
{
    int i;
    int dp[1000];

    dp[0]=0;

    for(i = 1; i <= n; i++) 
    {
        dp[i]= dp[i-1]+i;
    }
    return dp[n]; // Returning the calculated sum
}

int main()5
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    long int sum = dpsum(num);
    printf("The sum of numbers from 1 to %d = %ld.", num, sum); 

    return 0;
}
