#include<stdio.h>
// take Number from user  using 2 function 
// program Tital using modd operator we can got remindar any Number After Division
// Count  Number in reminder make revrese Number
// Date/5/12/2021/


int Reverse(int);  // function Declration

int main()
{
    int ivalue  = 0;
    int iret = 0;
    printf(" Enter the Number\n");
    scanf("%d",&ivalue);

 iret  =  Reverse(ivalue);

 printf(" Reverse Number is .... %d\n",iret);

 return 0;
}


int Reverse(int ino) // Function Defination
    {
    int idigit = 0;
    int iRev = 0;

    if (ino<0)
    {
     ino = - ino;
    }
    
    while(ino != 0)  // Change logic
    {
           idigit = ino%10;
           printf("%d\n",idigit);
           iRev = (iRev * 10) + idigit;
           ino = ino /10;
    }
   return iRev; 
}