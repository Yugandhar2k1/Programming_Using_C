#include<stdio.h>
void main()
{
    int i, r, k, count =0;

    printf("Enter values:\n");
    scanf("%d %d %d", &i, &r, &k);

    for (int num= i ; num <= r; num++)
    {
        if (num % k == 0)
        {
            count++;
        }
    }
    printf("Number of Divisors: %d", count);
    
}