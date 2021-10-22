/*Write a C program which input one character and check whether
input character is character,number or special symbol*/

#include<stdio.h>
#include<conio.h>

void main()
{
    char a;
    
    printf("\n Enter any character: ");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
    {
        printf("\n %c is a cahracter",a);
        
    }
    else if(a>=97 && a<=122)
    {
        printf("\n %c is a character",a);
    }
    else if(a>=48 && a<=57)
    {
        printf(" \n%c is a number",a);
    }
    else
        printf("\n %c is a special character",a);
}
