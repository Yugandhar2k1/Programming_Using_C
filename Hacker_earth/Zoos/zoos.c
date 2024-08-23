#include<stdio.h>
#include<string.h>
void main()
{
    int count_Z = 0, count_O = 0, count =0;
    char input_string[20];
    scanf("%s", input_string);
    int size_input_string = strlen(input_string);
    for (int i = 0; i < size_input_string; i++)
    {
        if (input_string[i] == 'Z' || input_string[i] == 'z')
        {
            count_Z++;
        }
        else if(input_string[i]== 'O' || input_string[i]== 'o')
        {
            count_O++;
        }
    }
    count = 2 * count_Z;
    if (count == count_O)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No \n");
    }
}