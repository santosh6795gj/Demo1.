#include<stdio.h>
// program Tital : take no From user and Display ABCD Latter on that Number
// using seprate  1 Helper Function
// Date /7/12/2021/
// if ew can not use \t and Second printf f function Reslut Display Vartical Format

void Display(int ino)
{
   int iCnt = 0;
   char ch = '\0';

for( iCnt = 1, ch = 'A'; iCnt <= ino; iCnt++, ch++)
{
        printf("%c\n",ch);
}

}

int main()
{
    int ivalue = 0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}