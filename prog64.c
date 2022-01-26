#include<stdio.h>

// program Tital : take no From user and Display   Below Same Structure 
// 
//    iRow = 4
//    iCol = 4
 
//   $   *   *   *
 
//    *   $   *   *
 
//    *   *   $   *
 
//    *    *   *   $
                      
// using seprate  1 Helper Function
// Date /7/12/2021/


void Display(int rows , int colum)
{
     int i = 0;
     int j = 0;

    for(i = 1; i<=rows; i++)
    {
          for (j = 1; j<=colum; j++)
          {
            
             if(j == i)
             {
                  printf("#\t");
             }
             else
             {
                  printf("*\t");
             }
          }
         printf("\n");
    }

}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf(" Enter rows...:\n");
    scanf("%d",&ivalue1);


    printf("Enter Colum\n");
    scanf("%d",&ivalue2);

    Display(ivalue1, ivalue2);

    return 0;


}