#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int);


int main()
{
  int ivalue = 0;
  bool iret =  false;
  printf(" Enter the Number\n");
  scanf("%d",&ivalue);

 iret = CheckEven(ivalue);
 if (iret == true)
 {
     printf(" iT is Even Number\n");
 }
 
  else
  {
     printf("IT is not Even Number\n");
  }
  
    return 0;

}

bool CheckEven(int no)
{
    if ((no %2) == 0 )
    {
         return true;
    }
    
    else
    {
        return false;
    }
}