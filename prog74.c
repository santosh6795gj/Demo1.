#include<stdio.h>

   // program Tital : give value From user in Array make Addition that value   using Helper Function
   // Date /7/12/2021/ 

   // int Addition(int *Brr)
   int Display(int Barr[])
   {
       int iCnt = 0;
       int isum = 0;

       for (iCnt = 0; iCnt<5; iCnt++)
       {
           isum = isum + Barr[iCnt];
       }
       
        return isum;     
   }



int main()
{
    int Arr[5];
    int iret = 0;
    int iCnt  = 0;
    printf("Enter Number\n");

    for (iCnt = 0; iCnt <5; iCnt++)
    {
      scanf("%d",&Arr[iCnt]);
    }
    
    iret =   Display(Arr);

     printf(" Addition is .....:%d",iret);

     return 0;
}

