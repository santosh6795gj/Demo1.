#include<stdio.h>
#include<stdlib.h>  // dynamic memory Allocation sathi include pakage

  // program Tital : give value From user in Array make Addition that value   using Helper Function
   // Date /8/12/2021/ 
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]


int Addition(int Brr[],int isize)
{
     int iCnt  = 0;
     int isum = 0;

    for(iCnt = 0; iCnt <isize; iCnt++)
    {
         isum = isum + Brr[iCnt];

    }
    
       return isum;
}

int main()
{
    int *Arr = NULL;
    int iCnt = 0, iret = 0, ilength = 0;

    printf(" Enter Number of elements\n");\
    scanf("%d",&ilength);

     Arr = (int *) malloc (sizeof(int) * ilength);  // Dynamic memory Alloction
         //   size of intger ilenght  yvadi memory Allocate krun de 

      printf(" Enter Number\n");

      for(iCnt = 0; iCnt<ilength; iCnt++)
      {
          scanf("%d",&Arr[iCnt]);
      }
      
       iret = Addition(Arr,ilength);

       printf("Addition is ... %d:\n",iret); // Addition 200

       free (Arr);    // After complete program  free the memory
       
       return 0;


}
