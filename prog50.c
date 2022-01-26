#include<stdio.h>
// program Tital : take no From user if Number is Even Display * OR Display #  Number on that Number
// using seprate  1 Helper Function
// Date /6/12/2021/
// Input :      5

// Input :      6

// iCnt          1    2   3   4    5   6

// Output :    *    #   *   #   *   #

void Display(int ino)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=ino; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("#\t");
        }
        else
        {
              printf("*\t");
        }
        
    }
    
}

int main()
{
    int ivalue = 0;
    printf("Enter the Number\n");
    scanf("%d",&ivalue);
    
    Display(ivalue);

    return  0;
}