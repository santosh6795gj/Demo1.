#include<stdio.h>
#include<stdlib.h>
   // program Tital : give value From user in Array Count >10 Number that Array that value using Helper Function
   // Date /8/12/2021/ 
   // Count  
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]
int Count(int Arr[] ,int isize)

{
      int iCnt = 0;
      int i = 0;
      for (i = 0; i <isize; i++)
      {
          if (Arr[i] > 10)   // logic 
          {
               iCnt++;   // new iCnt ghane  > 10 Number store kranaysthi
          }  // new  iCnt nahi gaytla tr i++ kyla tr Regular number Display Hotail 
      }  
     return iCnt;
}

int main()
{
    int *ptr = NULL;
    int iret = 0, iCnt  = 0, ilength = 0;


    printf("Enter Number of Elements\n");
    scanf("%d",&ilength);

    ptr = (int*)malloc (sizeof(int ) * ilength); // Dynamic memory Allocation

    printf("Enter Number\n");

    for(iCnt = 0; iCnt<ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


      iret =  Count(ptr,ilength); // Function call

      printf(" Total Number is ..:%d",iret);

      return 0;
}

