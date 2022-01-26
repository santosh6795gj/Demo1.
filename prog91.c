#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
   // program Tital : give value From user in Array Check  Number checkNumber is there or not Array using Helper Function
   // Date /8/12/2021/ 
   // check  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]
   
int CheckNumber(int Arr[] , int isize)
{
      int i = 0;

      for( i = 0; i <isize; i++)
      {
          if (Arr[i] == 11)
          {   break;  }
             
      }
      
      if (i == isize)   // logic not understand me perfectly
      {
          return false;;
      }
      else
      {
          return true;
      }
}

int main()
{
    int i = 0, ilength = 0;
    int *ptr = 0;
    bool bret = false;

    printf(" Enter the numbers of Elements\n");
    scanf("%d",&ilength);

    ptr = (int *) malloc (sizeof(int) *ilength);  // Daynamic memory Allocation

    printf(" Enter Number\n");

    for ( i = 0; i <ilength; i++)
    {
         scanf("%d",&ptr[i]);
    }
    
   bret =  CheckNumber(ptr,ilength);   // function call
   if ( bret == true)
   {
       printf(" Number is there\n");
   }
   else
   {
       printf(" Number is not there\n");

   }
  
     return  0;

}
