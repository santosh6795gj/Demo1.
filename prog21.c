#include<stdio.h>








typedef unsigned long int UINT;

int Factorial(int );

int main()
{
    int ivalue = 0;
    UINT iret = 0;
    printf("Eneter the Number\n");
    scanf("%d",&ivalue);

   iret =  Factorial(ivalue);

   printf(" Factorial is ...%d",iret);
   return 0;
}

int Factorial(int ino)
{

    UINT iFact = 1;
    int iCnt = 0;

    if (ino<0)
    {
        ino = -ino;
    }
    
  for(iCnt = 1; iCnt<=ino; iCnt++)
  {
      iFact = iFact *iCnt;
  }

     return iFact;
} 