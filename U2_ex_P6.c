/*Write a C program which input one character and if input character is upper
case then convert it in lower case.
If input character is lower case then convert in upper case. */

#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    
    printf("\n Enter any character: ");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
    {
        printf("\n %c ",a+32);
        
    }
    else if(a>=97 && a<=122)
    {
        printf("\n %c ",a-32);
    }
    else 
        printf("\n Invalid character");
}    
