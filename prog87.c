#include<stdio.h>
#include<stdlib.h>
// program Tital : give value From user in Array Check Min Number in Array using Helper Function
   // Date /8/12/2021/ 
   // check Min Number in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

int Minimum(int Arr[],int isize)
{
    int i = 0;
    int iMin = Arr[0];

    //      1        1          3 
   for( i = 0; i <isize; i++)
   {
        if (Arr[i] <iMin)// 4   min mde ek value ynar loop firnar second value and first value check
        { 
            // honar value min nasl tr loop firnar 3 num ynar loop condition stop honar
           iMin = Arr[i];   // 11 , 12, 13,     min<less than  no is >11
        } 
   }
    
       return iMin;
}

int main()
{
    int *ptr = 0;
    int iret = 0,  iCnt  = 0, ilenght = 0;

    printf(" Enter Number of Elements\n");
    scanf("%d",&ilenght);

    ptr = (int*) malloc (sizeof(int)* ilenght);  // Dynamic memory Allocation 

    printf(" Enter Number\n");

    for(iCnt = 0; iCnt<ilenght; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
     iret = Minimum (ptr,ilenght);  // Function Call
     
     printf(" Minimum is....:%d",iret);

     free(ptr);
     
     return 0;
}