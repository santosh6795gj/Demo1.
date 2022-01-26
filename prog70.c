#include<stdio.h>

// program Tital : Array Basic 
   // Date /7/12/2021/ 
int main()
{
    int Arr[7];
    int isum  =0;

    printf("Enter Number\n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
    scanf("%d",&Arr[5]);
    scanf("%d",&Arr[6]);
    scanf("%d",&Arr[7]);


    isum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4] + Arr[5] + Arr[6] +Arr[7];

    printf("Addition is...:%d",isum);

    return 0;
}