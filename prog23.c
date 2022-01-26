#include<stdio.h>
//  program Titale >gives  Number from user and return Factorial that Number
//  Date /5/ 12/ 2021/
//  using typedef, For, and While LOOP,

// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

typedef unsigned long int UINT;


UINT Factorial(int);

int main()
{
    int ivalue  = 0;
    UINT iret = 0;
    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    iret = Factorial (ivalue);
    printf(" Factorial is ....%d",iret);

    return 0;
}

UINT Factorial(int ino)
{

      int iCnt = 0;
      UINT Fact = 1;

      if (ino < 0)
      {
         ino = -ino;
      }
      
   //  for( iCnt = 1; iCnt <=ino; iCnt++)
   //  {
   //     Fact = Fact * iCnt;
   //  }
   iCnt = 1;            // 1
   while (iCnt<=ino)    // 2
   {
       Fact = Fact * iCnt; // 4
       iCnt++;   // 3
   }
   
   return Fact;
}