#include<stdio.h>
// program Tital : take no From user and Display ABCD Latter on that Number
// using seprate  1 Helper Function
// Date /7/12/2021/

// Input :      6
// iCnt           1    2   3   4    5   6
// Output :    a    b   c   d   e   f

// SAME PROGRAM BUT ONLY  CHANGE LOGIC...................
void Display(int ino)
{
     int iCnt = 0;
     char ch = '0';  // changes      'A'         
                                                // changes
     for(iCnt = 1, ch = 'A'; iCnt<=ino; iCnt++ , ch++)
    {
      printf("%c\t",ch);
      // ch++ kru sakta
    }
     printf("\n");
}

int main()
{
    int ivalue = 0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
     Display(ivalue);

     return 0;
}