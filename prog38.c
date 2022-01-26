#include<stdio.h>
#include<stdbool.h>

// program Tital Check Number is CheckPallindrome or not
// Date /6/12/2021/


bool CheckPallindrome(int);

int main()
{

    int ivalue = 0;
    bool   iret  = false;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);
  
  iret =  CheckPallindrome(ivalue);

  if (iret == true)
  {
      printf("Number is Pallindrome\n");
  }
  else
  {
      printf(" Number is not Pallindrome\n");
  }

       return 0;
}

bool CheckPallindrome(int ino)
{
    int idigit = 0, iRev = 0;
    int temp = ino;    // collect Number oringal in temp Variable 

    if (ino<0)
    {
        ino = - ino;
    }
     
     while (ino !=0)
     {
        idigit = ino %10;
        iRev = (iRev *10) + idigit;
        ino = ino /10;

     }
     
     if(iRev == temp) // check oringal Number And collect Number ==  it Palindrome
     {
         return true;
     }
     else
     {
         return false;
     }

}