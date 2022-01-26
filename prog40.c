#include<stdio.h>
#include<stdbool.h>
// program Tital Check Perfect Number is  or not
// using seprate 2 Helper Function
// Date /6/12/2021/


int SunFactor(int);  // Function  Declration

bool CheckPerfect(int );  // Function Declration

int main()  // function NO (1)
{ 
    int ivalue = 0;
    bool iret  = false;
    printf("Enter the Number \n");
    scanf("%d",&ivalue);

   iret = CheckPerfect(ivalue);   //  Function call (2)
   
   if (iret == true)
   {
       printf(" it is  Perfect  Number \n");
   }
   else
   {
       printf(" it is Not Perfect Number\n");
   }
   
     return 0;
}


bool CheckPerfect(int iNumber)  //  Function NO (2)
{
      int iRev = 0;
      if(iNumber<0)
      {
          iNumber = - iNumber;
      }
      
      iRev = SunFactor(iNumber);  
      if(iRev == iNumber)         // Function call (3)
      {
          return true;
      }
      else
      {
          return false;
      }

}

int SunFactor(int ino)  // Function NO(3)
{
    int iCnt = 0;
    int isum = 0;

    if (ino < 0)
    {
        ino = - ino;
    }
    
    for(iCnt = 1; iCnt<= (ino/2); iCnt++)  // dilele no and reslut == asel perfrct Number ahe 28 > 28
    {
       
       if((ino % iCnt) == 0)
       {
           isum = isum + iCnt;   // 
       }
    }
    
    return isum;    //   Return  Function call (2)
}