#include<stdio.h>

   int Minimum (int ino1, int ino2)
{
     int Result = 0;
     if (ino1 < ino2)
     {
        Result = ino1;
     }
     else
     {
         Result = ino2;
     }

   return Result;

}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int iret = 0;
    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter second Number\n");
    scanf("%d",&ivalue2);

    iret  =  Minimum(ivalue1,ivalue2);

     printf(" Minimum is...:%d",iret);

    return 0;
}