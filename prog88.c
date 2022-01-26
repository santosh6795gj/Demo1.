#include<stdio.h>
#include<stdlib.h>
//    10     // program Tital : give value From user in Array Check Min Number in Array using Helper Function
//    20      Date /8/12/2021/ 
//    30      check Min Number in Arrayy
//    40      using malloc function for Dynamic memory Allocation 
//    50       int Addition(int Brr[])   we can use *Brr not need use to int Brr[]
//    60
//    70
//    80
//    90  min>>         min and max madla Diffrence 90 - 10 Ahe
//    100  max >> 
// Difference is..: 90  


 int  Diffrence (int Arr[], int isize)
{

    int i = 0;
    int  Min = Arr[0],  iMax = Arr[0];

     for ( i = 1; i <isize; i++)
     {
         if(Arr[i] < Min)
         {
             Min = Arr[i];    
         }

         if(Arr[i] > iMax)
         {
             iMax = Arr[i]; 
         }
        
     }
       return iMax - Min;
}


int main()
{
    int *ptr = NULL;
    int iret = 0,  iCnt = 0, ilength = 0;

      printf(" Enter Number of Elements\n");
      scanf("%d",&ilength);

      ptr = (int*) malloc (sizeof(int) * ilength);

      printf(" Enter Number\n");

      for( iCnt = 0; iCnt <ilength; iCnt++)
      {
           scanf("%d",&ptr[iCnt]);

      }
      
    iret =  Diffrence(ptr, ilength);

    printf("Difference is..: %d",iret);

     free (ptr);
    
    
    return  0;
}