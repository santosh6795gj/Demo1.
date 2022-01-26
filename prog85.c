#include<stdio.h>
#include<stdlib.h>
// program Tital : give value From user in Array Check Max Number in Array using Helper Function
   // Date /8/12/2021/ 
   // check Max Number in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

  int Maximum(int Arr[], int isize)
{

       int Imax = Arr[0];
       int i = 0 ;
   
  //      1        1          3 
   for( i = 0; i <isize; i++)
   {
        if (Arr[i] >Imax)// 4   max mde ek value ynar loop firnar second value and first value check
        { // honar value max nasl tr loop firnar 3 num ynar loop condition stop honar
           Imax = Arr[i];   // 11 , 12, 13,     > max no is >30
        } 
   }
      return Imax;
}

int main()
{
    int *ptr = NULL;
    int  iret = 0, iCnt = 0, ilength = 0;

    printf(" Enter Number oF Elements\n");
    scanf("%d",&ilength);

    ptr = (int *) malloc (sizeof(int) * ilength);  // Dynamic memory Allocation

    printf(" Enter Number\n");

    for ( iCnt = 0; iCnt <ilength; iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }
    
    iret =   Maximum(ptr,ilength); // Function call

    printf(" Maximum is....: %d\n",iret);

     free(ptr);
     
     return  0;
}