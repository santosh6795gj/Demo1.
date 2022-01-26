#include<stdio.h>
// take Number from user  using 2 function 
// program Tital using modd operator we can got remindar any Number After Division
// and making Addition thise reminder
// Date/5/12/2021/


int Addition(int); // function Declration 

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    iret = Addition(ivalue);  // Function call

    printf(" Addition is ....%d\n",iret);

    return 0;
}

int Addition(int ino)    // Function Defination
{
    int idigit = 0;
    int iCnt = 0 ;

    if (ino<0) // Input updator
    {
      ino = - ino;
    }
    
    while(ino>0)
    {
         idigit = ino %10;   // yanaraya Remindrchi + krane 
          iCnt++ ;     // iCnt = iCnt + 1;  As pn cintax use kru Sakta
         ino = ino /10; // 1 + 2 + 3 + 4 + 5 + 6  = 21
    }

   return iCnt;
}