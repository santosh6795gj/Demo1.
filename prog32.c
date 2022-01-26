#include<stdio.h>

// take Number from user  using 2 function 
// program Tital using modd operator we can got remindar any Number After Division
// Count total Number in reminder
// Date/5/12/2021/

int CountDigit(int);

int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the Number\n");
    scanf("%d",&ivalue);

  iret =   CountDigit(ivalue);

  printf(" CountDigit Are ....%d",iret);

   return 0;
}

int CountDigit(int ino)
{

    int idigit = 0;
    int iCnt = 0;

    if (ino == 0)
    {
        return 1 ;
    }
    
   if (ino<0)
   {
       ino = - ino;
   }
   
  while(ino>0)
  {
      idigit = ino %10;
      iCnt++;
      ino = ino /10;
  }

    return iCnt;
}