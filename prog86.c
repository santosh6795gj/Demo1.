#include<stdio.h>
#include<stdlib.h>
// program Tital : give value From user in Array Check Max Number in Array using Helper Function
   // Date /8/12/2021/ 
   // check Max Number in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

int Maximum(int Arr[] , int isize)
{

     int i = 0,   imax =  Arr [0] ;
     
     for (i = 1; i <isize; i++)  // change only lopp condition  1 
     {
          if (Arr[i] >imax)
          {
              imax = Arr[i];
          }
          
     }
     
       return imax;
}

int main()
{

   int *ptr = NULL;
   int iret  = 0, iCnt = 0, ilength = 0;

    printf(" Enter Numbre of Elements\n");
    scanf("%d",&ilength);

    ptr = (int *) malloc(sizeof(int) * ilength);

    printf(" Enter Number\n");

 for (iCnt = 0; iCnt <ilength; iCnt++)
 {
     scanf("%d",&ptr[iCnt]);
 }
 
    iret = Maximum(ptr, ilength);

    printf(" Maximum Number is..:%d",iret);

    return 0; 

}