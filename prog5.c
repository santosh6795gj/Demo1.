#include<stdio.h>
void Display(int ino)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < ino; iCnt++)
   {
       printf(" *\t ");
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