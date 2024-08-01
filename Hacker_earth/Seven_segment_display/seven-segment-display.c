#include<stdio.h>
void main()
{
    int test_num =0 , input_num[100];
    printf("Test Cases: ");
    scanf("%d", &test_num);

    printf("Enter input numbers: ");
    for (int i = 0; i < test_num; i++)
    {
        scanf("%d", &input_num[i]);
    }
    
    int input_size = sizeof(input_num)/sizeof(input_num[0]);

    for (int i = 0; i < input_size; i++)
    {
        /* code */
    }
    
}