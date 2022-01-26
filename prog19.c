#include<stdio.h>

// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

//  program Titale >gives  Number from use and return Factorial that Number
//  Date /5/ 12/ 2021/

int Factorial(int);

int main()
{
    int ivalue1 = 0;
    int iret = 0;
    printf("Eneter the Number\n");
    scanf("%d",&ivalue1);

    iret  =  Factorial (ivalue1);

     printf(" Factorial is......%d",iret);

     return 0;
}


int Factorial(int ino)
{
    int iFact  = 1;
    int iCnt =  0;

    if (ino <0)
    {
        ino = - ino;
    }
    
   for(iCnt = 1; iCnt<=ino; iCnt++)  // loop make round same as u have give number 5
   {
         iFact = iFact * iCnt;  // round 1 > 5+4   ==== 
   }                          // round 2 > 4+3   ====
                              // round 3 > 3+2   ====
   return iFact;               // round 4 > 2+1   ====

}