#include<stdio.h>
// program Tital : take no From user and Display  Rows and Colum that Number
// 3 rows   > *    *   *      3 < colum
//            *    *   *    
//            *    *   *    
//            *    *   *    
//
//
// using seprate  1 Helper Function
// Date /7/12/2021/


/*
    iRow = 3
    iCol = 3
 
 colum   1   2   3 rows >
    !    1   2   3
         1   2   3
 */

void Display(int iRows , int iColum)
{
  
   int iCnt1 = 0, iCnt2 = 0;
   //      1         2           3
   for(iCnt1 = 1; iCnt1<=iRows; iCnt1++) // outer loop
   {    //      1         2           3
        for (iCnt2 = 1; iCnt2 <= iColum; iCnt2++)//inner loop
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

    printf("Enter Rows...:\n");
    scanf("%d",&ivalue1);

    printf(" Enter Colums..:\n");
    scanf("%d",&ivalue2);

    Display(ivalue1, ivalue2);

    return 0;
}