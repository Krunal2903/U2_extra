/*Write a C program which input one character and if input character is upper
case then convert it in lower case.
If input character is lower case then convert in upper case. */

#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    
    printf("\n Enter a month number: ");
    scanf("%d",&a);
    
    if(a==1)
        printf("\n January");
    else if(a==2)    
        printf("\n February");
    else if(a==3)  
        printf("\n March");
     else if(a==4)
        printf("\n April");
    else if(a==5)
        printf("\n May");
    else if(a==6)
        printf("\n June");
    else if(a==7)
        printf("\n July");
    else if(a==8)
        printf("\n August");
    else if(a==9)
        printf("\n September"); 
    else if(a==10)
        printf("\n October");
    else if(a==11)
        printf("\n November");
    else if(a==12)
        printf("\n December");
    else
        printf("\n Invalid input");
}    
