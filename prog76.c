#include<stdio.h>
// program Tital : give value From user in Array make Addition that value   using Helper Function
   // Date /8/12/2021/ 

   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

int Addition(int *Brr, int isize)
{
    int iCnt = 0;
    int isum = 0;

    for (iCnt = 0; iCnt <isize; iCnt++)
    {
         isum = isum + Brr[iCnt];
    }
    
      return isum;
}


int main()
{
    int Arr[5];
    int iCnt = 0;
    int iret  =0;

    printf("Enter Number\n");
     for ( iCnt = 0; iCnt <5; iCnt++)
     {
         scanf("%d",&Arr[iCnt]);
     }
     

    iret  = Addition(Arr,5);

    printf(" Addition is ....:%d",iret);

    return 0;
}