/**************************************************************************************** 
Problem
Arpasland has surrounded by attackers. A truck enters the city. 
The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. 
He doubts about the truck, maybe it's from the siege. He knows that a tag is valid 
if the sum of every two consecutive digits of it is even and its letter is not a vowel. 
Determine if the tag of the truck is valid or not.

We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.

Input Format
The first line contains a string of length 9. The format is "DDXDDD-DD"
where D stands for a digit (non zero) and X is an uppercase english letter.

Output Format
Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes)
sample input: 12X345-67
sample output: invalid
*********************************************************************************************/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>

void tag_calculation(char *tag_input, char *vowels, char *ignore, int length, int vowel_len)
{
    int isvalid;
    for(int i = 0; i < length; i++)
    {
        if (isdigit(tag_input[i]) && isdigit(tag_input[i+1]))
        {
            int first =  tag_input[i]- '0';
            int second = tag_input[i+1]- '0';
            int add = first + second;
            int odd_even = add % 2;
            if (odd_even ==0)
            {
                isvalid = 1;
                continue; // valid
            }
            else
            {
                isvalid = 0;
                break; // invalid
            }   
        }
        else if(isalpha(tag_input[i]))
        {
            if (tag_input[i] == 'A' || tag_input[i] == 'E' || tag_input[i] == 'I' 
                                || tag_input[i] == 'O' || tag_input[i] == 'U' || tag_input[i] == 'Y')
            {
                isvalid=0;
                break; //invalid
            }  
        }
    }
    if (isvalid)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }    
}
void main()
{
    char tag[9];
    char vowels[]={'A', 'E', 'I', 'O', 'U', 'Y'};
    char ignore[]={'-'};
    printf("Enter Tag Value: ");
    scanf("%s", tag);
    int length = strlen(tag);
    int vowel_length = strlen(vowels);

    tag_calculation(tag, vowels, ignore, length, vowel_length) ;  
}