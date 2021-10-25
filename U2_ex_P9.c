/*Write a C program which displays square of all numbers
starting from 1 to user choice*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    
    printf("\nEnter a number: ");
    scanf("%d",&a);
    
    for(b=1; b<=a; b++)
    {
        printf("\n %d",b*b);    
    }
}
