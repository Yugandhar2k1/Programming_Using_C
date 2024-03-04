#include<stdio.h>
int fabanocciDP(int n);

int fabanocciDP(int n)
{
    int fun[100], i;
    fun[0]=0;
    fun[1]=1;

    for(i =2; i<=n; i++)
    {
        fun[i]= fun[i-1] + fun[i-2];
    }
    return fun[n];
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int b = fabanocciDP(n);
    printf("The %dth Fibonacci number is: %d\n",n, b );
}