#include<stdio.h>

// program Tital : Array Basic  how to gives input in  Array 
   // Date /7/12/2021/ 

int main()
{
    int  Arr[5];
    int isum = 0;
    int iCnt = 0;

 printf("Enter Number\n");

 // scanf("%d",&Arr[0]);
 // scanf("%d",&Arr[1]);
 // scanf("%d",&Arr[2]);
 // scanf("%d",&Arr,[3]);
 // scanf("%d",&Arr,[4]);

 for(iCnt = 0; iCnt < 5; iCnt++)
 {
      scanf("%d",&Arr[iCnt]);  // you give input a use for loop
 }
 
   isum = Arr[0]+ Arr[1] + Arr[2] + Arr[3] + Arr[4];

   printf(" Addition is ...:%d",isum);

   return 0;

}