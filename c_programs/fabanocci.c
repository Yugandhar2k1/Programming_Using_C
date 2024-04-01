#include<stdio.h>
void main()
{
    int f[100], n;
    f[0]= 0;
    f[1]= 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)     
    {
        f[i]= f[i+1]+f[i+2];
    }
    int b = f[n];
    printf("Fabnocci Series %d", b);
    
}