/*
 * factorial.c
 *
 *  Created on: 21-Feb-2024
 *      Author: Yugandhar
 */
#include<stdio.h>

int main()
{
	long int num, fact =1;
	scanf("%d", &num);

	for(int i =1; i<=num; i++)
	{
		fact = fact*i;
	}
	printf("%d", fact);

	return 0;

}

