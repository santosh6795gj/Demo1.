#include<stdio.h>
#include<stdlib.h>
// program Tital : give value From user in Array Count Even Number that Array that value using Helper Function
   // Date /8/12/2021/ 
   // Count Even Number  total Number in Array
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]


int CountEven(int Brr[] , int isize)
{
        int iCnt = 0;
        int i = 0;

        for( i = 0; i <isize; i++)
        {
             if((Brr[i] % 2 ) == 0)   //   in Array Count  even Number logic
             {
                 iCnt++;
             }
 
        }
       return iCnt;    
}

int main()
{
    int *ptr = NULL;
    // Array ptr
    int iCnt = 0, iret =  0, ilenght = 0;
//  loop          return      total element
     printf(" Enter Number of Element \n");
     scanf("%d",&ilenght);

    ptr = (int*) malloc (sizeof(int) * ilenght);  // Dynamic memory 

    printf(" Enter Number\n");
    
    for (iCnt = 0; iCnt <ilenght; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
     iret = CountEven(ptr,ilenght);  // Function call 

     printf(" Even Number is .. %d\n",iret);

      free(ptr);
     return 0;

}
