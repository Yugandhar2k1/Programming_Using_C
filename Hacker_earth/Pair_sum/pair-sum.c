#include<stdio.h>
void pair_num(int flag_1, int flag_2)
{
    if (flag_1 > 1)
    {
        printf("YES");
    }
    else if (flag_2 < 1)
    {
        printf("No");
    }
    else if (flag_2==1)
    {
        printf("NO");
    }
    
}
void main()
{
    int pair_sum=0, flag_yes =0, flag_no =0;
    int arr[5] = {8, 8, 1, 4, 1};
    int num = 9;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1 ; j < 4; i++)
        {
            pair_sum = arr[i]+arr[j];

            if (pair_sum == num)
            {
                flag_yes++;
                // printf("YES");
                break;
            }
            else if (pair_sum < 9)
            {
                flag_no = 1;
                continue;
            }
        }
    }
    pair_num(flag_yes, flag_no);
}
