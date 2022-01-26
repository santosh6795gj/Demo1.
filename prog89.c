#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

   // program Tital : give value From user in Array Check  Number checkNumber is there or not Array using Helper Function
   // Date /8/12/2021/ 
   // check  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

bool CheckNumber(int Arr[] , int isize)
{

       int i  = 0;
       for ( i = 0; i <isize; i++)
       {
           if (Arr[i] == 11)    // logic
           {
               return true;
           }
           
       }
       return false;  // Condition write out of loop
}

int main()
{
    int *ptr = NULL;
    int  i = 0, ilength = 0;
    bool iret =  false;

    printf(" Enter Number of Elements\n");
    scanf("%d",&ilength);

    ptr = (int*) malloc (sizeof(int) *ilength);  // Dynamic memory Allocation

    printf("Enter Number\n");

    for( i = 0; i <ilength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    iret = CheckNumber(ptr,ilength);  // Function Call
    
    if( iret == true)
    {
        printf(" Number is there....:\n");
    }
    else
    {
        printf(" Number is Not there.....\n");
    }
   
    free(ptr);
    return 0;

}






