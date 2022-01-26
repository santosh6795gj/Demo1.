#include<stdio.h>

// take Number from user  using 2 function 
// program Tital using modd operator we can got remindar any Number After Division
// Count total Number in reminder only Even Number
// Date/5/12/2021/

int CountDigit(int);  // function Declration


int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    iret =  CountDigit(ivalue);  // Function call 

  printf(" CountDigit are....%d",iret);

   return 0;
}

int CountDigit(int ino)   // function Defination
{

    int iCnt = 0;
    int idigit = 0;

    if (ino == 0)
    {
         return 1;
    }
    
    if (ino<0)  // value updator
    {
        ino= - ino;
    }
    
    while (ino>0)      // O(N)     Where N is number of digits         (N >= 0)
    {
      idigit = ino %10;
     if ((idigit %2 ) == 0)  // Count only even Number
     {
         iCnt++;
     }
     
      ino = ino /10;
    }
    
    return iCnt;
}
