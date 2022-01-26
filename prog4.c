#include<stdio.h>

// Accept number from user and display that number of * on screen.
// Input : 4
// Output : *   *   *   *  

// Input : 2
// Output : *   *   

void Display(int ino)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < ino; iCnt++)
   {
       printf(" *\t ");
   }
   
}
int main()
{

    int ivalue = 0;
    printf("Enter Number\n");

    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}