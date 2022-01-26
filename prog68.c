   #include<stdio.h>

   // program Tital : take no From user and Display   Below Same Structure
   // Date /7/12/2021/ 

/*
    iRow = 4

    iCol = 4

 *
 *  *
 *  *   *
 *  *   *   *
 */
 void Display(int rows, int Colum)
{
      int i = 0;
      int j = 0;

     if (rows != Colum)   // we not give same Value rows and Colum program  return 
     {
         return ;
     }
     
     for( i = 1; i<= rows; i++)
     {
        for( j = 1; j<= Colum; j++)
        {
             if (i >= j)
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

    printf("Enter Number of rows\n");
    scanf("%d",&ivalue1);

    printf("Enter Number of Colum\n");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);

    return 0;
}