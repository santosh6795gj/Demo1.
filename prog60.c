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

void Display()
{
   int iRow = 4;
   int jcolum = 4;

   int i = 0;
   int j = 0;
   
   for (i = 1; i<= iRow; i++)  // while first loop complete first Round loop goes a second loop
   { // secont lopp travel 4 time 
       for (j = 1; j<= jcolum; j++)
       {
          printf("*\t");
       }
       printf("\n");
   }
   
}

int main()
{
    Display();

    return 0;
}

