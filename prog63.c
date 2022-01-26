#include<stdio.h>

// program Tital : take no From user and Display  Rows and Colum that Number
// 4 rows   > *    *   *       < colum
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
  
   int i = 0, j = 0;
   //      1         2           3
   for(i = 1; i<=iRows; i++) // outer loop
   {    //      1         2           3
        for (j = 1; j <= iColum; j++)//inner loop
        {
            printf("*\t",i);
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