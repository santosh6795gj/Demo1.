#include<stdio.h>
// program Tital : take no From user OR Count  Total Number gratar 5
// using seprate  1 Helper Function
// Date /7/12/2021/
// Input :   

// Input : 127894 
// Output : 3

// Input : 561750
// Output : 4

int Count(int ino);

int main()
{
    int ivalue1 = 0;
    int iret  = 0;
    printf("Enter Number\n");
    scanf("%d",&ivalue1);

    iret = Count(ivalue1);

    printf(" Digits greater than 5 are ...:%d\n",iret);

    return  0;

}


int Count(int ino)
{
  int iCnt = 0, idigit = 0;

 while (ino > 0)
 {
     idigit = ino % 10; // Division  karun return reminder
     if (idigit >= 5)
     {
         iCnt ++; /// a Greatr than 5 asl count that Number
     }
     ino = ino /10;
 }
 
     return iCnt;
}


