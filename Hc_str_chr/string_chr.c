/*
 * string_chr.c
 *
 *  Created on: 20-Feb-2024
 *      Author: Yugandhar
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, s[100], se[20];
//    scanf(" %c", &ch);
//    scanf("%s", se);
//    scanf(" %[^\n]%*c", s); // Note the space before %[^\n] to consume any leading whitespace
//    printf("%c\n", ch);
//    printf("%s\n",se);
//    printf("%s\n", s);

    scanf(" %c", &ch);
    scanf("%s", se);
    scanf(" %[^\n]%*c", s); // Note the space before %[^\n] to consume any leading whitespace
    printf("%c\n", ch);
    printf("%s\n",se);
    printf("%s\n", s);


    return 0;
}

