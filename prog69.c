#include<stdio.h>

int main()  // program Tital : Array Basic Structrue
   // Date /7/12/2021/ 

{
     int Arr[5]; // Array og 5 integers

     int iSum = 0;

     printf(" Enter Number\n");
     
     scanf("%d",&Arr[0]);
     scanf("%d",&Arr[1]);
     scanf("%d",&Arr[2]);
     scanf("%d",&Arr[3]);
     scanf("%d",&Arr[4]);

   iSum = Arr[0] + Arr[1] + Arr [2] + Arr [3] + Arr[4];
   printf(" Addition is : %d\n",iSum);

   return 0;
}