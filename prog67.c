#include<stdio.h>
    // program Tital : take no From user and Display   Below Same Structure
   // Date /7/12/2021/ 
/*
    iRow = 6  program run honar
    iCol  6 = 6 >  rows and Colum value same nasel tr program reslut Display nahi honar
    $   #   #  #
    *   $   #  #
    *   *   $   #
    *   *   *   $
 
 */

void Display(int rows, int Colum)
{
      int = i 0;
      int = j 0;

      if (rows != Colum)  // same nasel tr return kra   example>>>  rows>>5     colum>>6 
      {  //   == Asel tr Condition Apply honar
          return 0;
      }
      for(i= 1; i<=rows; i++)
      {
      
      for(j= 1; j<=Colum; j++)
      {
          if (i > j)
          {
              printf("*\t");

          }
          else if(i < j)
          {
              printf("#\t");
          }
          else
          {
              printf("$\t");
          }

        }
       printf("\n");
      }

}


int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

     printf("Enter the no of rows\n");
     scanf("%d",&ivalue1);

     printf(" Enter the no of Colum\n");
     scanf("%d",&ivalue2);


     Display(ivalue1, ivalue2);

     return 0;
}

