#include<stdio.h>
#include<stdlib.h>
   // program Tital : give value From user in Array Count >10   <20 Number that Array that value using Helper Function
   // Date /8/12/2021/ 
   // Count number 10>  <20  total Number in Array
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]


 int CountRange(int Arr[], int isize)
 {

      int iCnt = 0;
      int i = 0;

      for ( i = 0; i <isize; i++)
      {
            if((Arr[i]> 10) && (Arr[i]<20 ))  //// new iCnt ghane  Number store kranaysthi
            { // new  iCnt nahi gaytla tr i++ kyla tr Regular number Display Hotail
                iCnt++;
            }
            
      }
      return iCnt;
}

int main()
{
    int *ptr = 0;
    int iret =  0, iCnt = 0, ilenght = 0;


    printf(" Enter Number of elements\n");
    scanf("%d",&ilenght);

    ptr = (int*) malloc(sizeof(int) *ilenght);  // Dynamic memory Allocation

    printf("Enter number\n");
    
        for ( iCnt = 0; iCnt < ilenght; iCnt++)
        {
          scanf("%d",&ptr[iCnt]);
        }
        
       iret = CountRange(ptr,ilenght);    // Function call

       printf(" Total Numbers are..:%d",iret);

       return  0;
 
}