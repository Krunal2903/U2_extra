/* write a program to print the fullform of a gender*/

#include<stdio.h>

void main()
{
    char g;
    
    printf("\n Enter your gender M/F: ");
    scanf("%c",&g);
    
    if(g=='M') 
    {
        printf("\n Male");
    }
    
    else if(g=='F') 
    {
        printf("\n Female");
    }
    
}
