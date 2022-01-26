#include<stdio.h>
#include<stdlib.h>
   // program Tital : give value From user in Array Calculte Avarage that value using Helper Function
   // Date /8/12/2021/ 
   // calculte Avarage  total Number in Array
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]

int Avarage(int str[], int isize)
{
   int i = 0;
   int isum = 0;
   float  Freslut = 0.0f;
   for ( i = 0; i <isize; i++)
   {
       isum = isum + str[i];
   }
   Freslut = (float)isum / (float)isize;   // 18.0 / 4.0
    return Freslut;
}

int main()
{
    int *ptr = NULL;
    int iCnt  = 0, ilength = 0;
    float fRet = 0.0f;

    printf(" Enter Number of elements\n");
    scanf("%d",&ilength);

    ptr = (int*) malloc (sizeof(int) * ilength);  // Dynamic memory Alloction

     printf(" Enter element\n");

    for (iCnt = 0; iCnt <ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    fRet = Avarage(ptr,ilength);

    printf(" Avarage is.... : %.2f\n",fRet);

    return 0;

}