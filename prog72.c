#include<stdio.h>
// program Tital : Array Basic  how to gives input in  Array 
   // Date /7/12/2021/ 

int main()
{
    int Arr[5];
    int iCnt = 0;
    int isum = 0;

    printf("Enter Number\n");

    for(iCnt = 0; iCnt <5; iCnt++)
    {
         scanf("%d",&Arr[iCnt]);  
    }
    
    isum =  isum + Arr[0];
    isum =  isum + Arr[1];
    isum =  isum + Arr[2];
    isum =  isum + Arr[3];
    isum =  isum + Arr[4];

      printf(" Addition is ...:%d",isum);

      return  0;
}