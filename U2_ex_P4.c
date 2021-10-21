/*Write a C program which input one character and check 
whether it is vowel character or not */


#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    
	printf("\n Enter any Character: ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
	    printf("\n input character is vowel.");
	}
	
	else
	{
	    printf("\n Not vowel.");
	}
}
