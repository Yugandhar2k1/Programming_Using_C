#include<stdio.h>
#include<string.h>

void toogle_string(char *string, int length)
{
    for (int i = 0; i < length; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
        else if(string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
    }
    printf("%s", string);
}
int main()
{
    char  input_string[100];
    scanf("%s", input_string);
    int length = strlen(input_string);

    toogle_string(input_string, length);

    return 0;
}