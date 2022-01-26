#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
   // program Tital : give value From user in Array Check  Number checkNumber is there or not Array using Helper Function
   // Date /8/12/2021/ 
   // check  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

bool CheckNumber(int Arr[] ,int isize)
{

          int i  = 0;
          bool bret = false;

          for (i = 0; i <isize; i++)
          {
               if(Arr[i] == 11)
               {
                    bret = true;   // using break Condition
                    break;
               }
               
          }
       return bret;        
}

int main()
{
   int i = 0, ilenght = 0;
   int *ptr = NULL;
   bool iret = false;

  printf(" Enter the Number of Elements\n");
  scanf("%d",&ilenght);

  ptr = (int*) malloc (sizeof(int) *ilenght);  // Dynamic memory Allocation

  printf(" Enter Number\n");
  
  for ( i = 0; i <ilenght; i++)
  {
      scanf("%d",&ptr[i]);
  }
  
   iret = CheckNumber(ptr,ilenght);  // function call

   if (iret == true)
   {
       printf(" Number is there is .....:\n",iret);
   }
   
   else
   {
       printf(" Number is not there \n");
   }

    free(ptr);
    
    return 0;

}