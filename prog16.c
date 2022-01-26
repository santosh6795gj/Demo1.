#include<stdio.h>

// program Titale take Number From user and convert this Number reverse order using for loop
// exmple give number 7 
// Display ... 7654321
// Date 5/12/2021

void Display(int);  // Function Declration 

int main()
{
    int ivalue = 0;
    printf("Enter the Number\n"); 
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;                                                        
}

void  Display(int ino)  // Function Defination
{
   int i = 0;

   for(i = ino; i>=1; i--)   // logic reverse Number

   printf("%d",i);

}

