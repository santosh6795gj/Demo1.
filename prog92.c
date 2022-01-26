#include<stdio.h> // for printf scanf
#include<stdlib.h> // Dynamic memory Allocation
#include<stdbool.h> // bool condition true  and false

// program Tital : give value From user in Array Check  Number checkNumber is there or not Array using Helper Function
   // Date /8/12/2021/ 
   // serach  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

int CheckNumber(int Arr[],int isize, int ino)
{
     int i = 0;

     for( i = 0; i <isize; i++)  // isize and
     {
          if(Arr[i] == ino) // i == same ase tr false
          {    break;   }  
          
     }
     if(i == isize)
     {
         return false;
     }
     else
     {
          return true;
     }
         
}

int main()
{
    int *ptr = NULL; 
    int  i = 0,  ilenght = 0, ivalue = 0;
    bool bret = false;

    printf("Enter Number of Elements\n");
    scanf("%d",&ilenght);

    ptr = (int*) malloc(sizeof(int) *ilenght);  // Dynamic memory Allocation

    printf(" Enter Number\n");

    for (i = 0; i <ilenght; i++)
    {
       scanf("%d",&ptr[i]);
    }
    
    printf(" Enter Element to  Serach\n");
    scanf("%d",&ivalue);

   bret =  CheckNumber(ptr, ilenght, ivalue);  // Function call
   if (bret == true)
   {
       printf(" Number is there\n");
   }
   else
   {
       printf(" Number is not  there\n");
   }
   
     free(ptr);
     return 0;

}