#include<stdio.h>
// program Tital : take no From user OR Display Avarge  Number on that Number
// using seprate  1 Helper Function
// Date /7/12/2021/
// Input :   

float Average(int ino1, int ino2, int ino3)
{
  int isum  = 0;
  float fReslut = 0.0;

  isum = ino1 + ino2 + ino3;
   fReslut = isum / 3;

  return fReslut;

}

int main()
{

    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;
    float fret = 0;
    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf(" Enter Scond Number\n");
    scanf("%d",&ivalue2);
    

    printf(" Enter third Number\n");
    scanf("%d",&ivalue3);

    fret =  Average(ivalue1, ivalue2, ivalue3);

    printf("Averages is ..: %f\n",fret);

    return  0;

}