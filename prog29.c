#include<stdio.h>

// take Number from user
// program Tital using modd operator we can got remindar any Number After Division
// and making Addition thise reminder
// Date/5/12/2021/
 
 
 int Display(int);  // function Declration

int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("Enter the number\n");
    scanf("%d",&ivalue);

  iret =  Display(ivalue);   // Function call 
 
  printf("Addition is ....:%d",iret);

   return 0;
}


int Display(int ino)  // Function Defination
{
     int idigit = 0;
     int isum = 0;

     while (ino>0)
     {
        idigit = ino %10;  // yanaraya Remindrchi + krane 
        isum = isum + idigit ; // 1 + 2 + 3 + 4 + 5 + 6  = 21
        ino = ino/10;
     }
    return ifact;  
}