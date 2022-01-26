#include<stdio.h>

// take Number from user  using 2 function 
// program Tital using modd operator we can got remindar any Number After Division
// Count total Number in reminder only Even Number
// Date/5/12/2021/

int CountDigit(int);

int main()
{

     int ivalue  = 0;
     int iret = 0;

     printf("Enter the Number\n");
      scanf("%d",&ivalue);

     iret =   CountDigit(ivalue); 
     printf(" CountDigit are....%d\n",iret);

     return 0;
}

int CountDigit(int ino)
{

    int idigit = 0;
    int isum  = 0;
 
     if (ino == 0)
     {
         return 1;
     }
     
     if (ino<0)
     {
         ino = - ino;
     }
     
  while (ino>0)
  {
      idigit = ino %10;
      if((idigit %2 ) == 0 )
      {
          isum = isum + idigit;
      }
       ino = ino /10;
    
    }
  
   return isum;

}