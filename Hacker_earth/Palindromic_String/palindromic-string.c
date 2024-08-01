#include<stdio.h>
#include<string.h>

void reverse_string(char *input_str)
{
    char reverse_string[100];
    int length_string = strlen(input_str);
    for (int i = 0; i < length_string; i++)
    {
        reverse_string[i] = input_str[length_string -1-i]; 
    }
    printf("reversed string: %s\n", reverse_string);

    if (strcmp(input_str, reverse_string)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
void main()
{
    char input_string[100], string_cpy[100];
    printf("Enter string: ");
    scanf("%s", &input_string);

    strcpy(string_cpy, input_string);
    reverse_string(input_string);
}