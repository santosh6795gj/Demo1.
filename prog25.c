#include<stdio.h>

// Date /5/12/2021/

void Factorial(int);

int main()
{

    int ivalue  = 0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);

    Factorial(ivalue);

    return 0;
}

void Factorial(int ino)
{

 int iCnt = 0;

 if (ino<0)
 {
     ino = - ino;
 }
 
 for(iCnt = 1;(iCnt<=ino/2); iCnt++)  // O(N)
 {
     if((ino % iCnt) == 0)  // ICnt is a factor
     {
         printf("%d",iCnt);
     }
     
   }

}

/*
iValue = 8

(8 % 1) == 0            1
(8 % 2) == 0            2
(8 % 3) == 0
(8 % 4) == 0            4
(8 % 5) == 0
(8 % 6) == 0
(8 % 7) == 0
 
 */