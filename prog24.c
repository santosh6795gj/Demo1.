#include<stdio.h>


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
 
 for(iCnt = 1; iCnt<=ino; iCnt++)
 {
     if((ino % iCnt) == 0)
     {
         printf("%d",iCnt);
     }
     
   }

}







