#include<stdio.h>

// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

//  program Titale >gives  Number from use and return Factorial that Number
//  Date /5/ 12/ 2021/


int Factorial(int);  // function Declration 


int main()
{
     int ivalue  = 0;
     int iret   = 0;

     printf(" Enter the Number\n");
     scanf("%d",&ivalue);

    iret  = Factorial(ivalue);

    printf(" Factorial is .. %d",iret);

    return 0;
}

int Factorial (int ino)   // function Defination
{
    unsigned long int iFact = 1;
    int iCnt = 0;

    if (ino< 0)   // updator
    {
        ino = - ino;
    }

   for(iCnt = 1; iCnt<=ino; iCnt++)    // round 1 > 5*4   ====
   {                                   // round 2 > 4*3   ====
        iFact = iFact + iCnt;          // round 3 > 3*2   ====
   }                                  // round 4 > 2*1   ====
    return iFact;

}