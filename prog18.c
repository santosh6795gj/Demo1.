#include<stdio.h>

// program Titale Addition of  1 Number using for loop 
// exmple give number 3 , 5
// Display ... 6,  , 15
// Date 5/12/2021

// Input : 3
// Output : 6

// Input : 5
// Output : 15

// program not understand perfectly me


int Addition(int); // Function Declration


int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the Number\n");
    scanf("%d",&ivalue);

      iret = Addition(ivalue);
      printf("Addition is ..%d",iret);

      return 0;
}

int Addition(int ino)     // Function Defination
{
   int iCnt = 0;
   int isum = 0;

if (ino< 0)
{
    ino  = - ino;   // updator
}

for ( iCnt = 1; iCnt <=ino; iCnt++)
{
    isum = isum + iCnt;
}

   return isum;
}


