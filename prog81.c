#include<stdio.h>
#include<stdlib.h>

   // program Tital : give value From user in Array Make Addition of Odd Number Number that Array that value using Helper Function
   // Date /8/12/2021/ 
   // Count Even Number  total Number in Array
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

 int SumOdd(int Arr[],int isize)
{
     int iCnt  = 0;
     int isum = 0;

     for(iCnt = 0 ; iCnt < isize; iCnt++)
     {
         if((Arr[iCnt] % 2 ) != 0)  // Odd Number yanar 
         {
             isum = isum + Arr[iCnt];     //    Addition odd Number honar
         }
         
     }
        return isum;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iret = 0, ilength = 0;

   printf(" Enter Number of Elelment\n");
   scanf("%d",&ilength);

   ptr = (int *) malloc (sizeof(int) * ilength); // Daynamic memory Allocation

   printf("Enter Number\n");

   for(iCnt = 0; iCnt< ilength; iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }

   iret =  SumOdd(ptr,ilength);  // function  Call

   printf(" Addition is....:%d",iret);

   return 0;


}