/*Write a C program which input one character
and check whether it is lower case or not.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("\n Enter any Character: ");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
	{
		printf("\n Input Char is lowercase.");
	}
	else
	{
		printf("\n Not lowercase.");
	}
}
