#include<stdio.h>

// program Tital : take no From user and Display  Rows and Colum that Number
// 4 rows   > *    *   *    *  4 < colum
//            *    *   *    *
//            *    *   *    *
//            *    *   *    *
//
//
// using seprate  1 Helper Function
// Date /7/12/2021/

void Display(int iRow , int iculm)
{
  
   int iCnt1 = 0, iCnt2 = 0;
   for(iCnt1 = 1; iCnt1<=iRow; iCnt1++)
   {

       for(iCnt2 = 1; iCnt2<=iculm; iCnt2++)
       {
            printf("*\t");
       }
   
       printf("\n");
   
   }


}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("Enter Rows.....:\n");
    scanf("%d",&ivalue1);

    printf(" Enter Colum ......:\n");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);

    return 0;
}