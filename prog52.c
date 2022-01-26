#include<stdio.h>
// program Tital : take no From user OR Display Avarge  Number on that Number
// give hardcoreded value
//using seprate  1 Helper Function
// Date /7/12/2021/
// Input :   

int Avarage(int ino1, int ino2, int ino3)
{
     int isum = 0;
     float iReslut = 0.0;
     isum  =  ino1+ ino2 + ino3;
     iReslut = isum /3;
   
    return iReslut;
}
int main()
{

    int ivalue1  = 10;
    int ivalue2 =  20;
    int ivalue3  = 30;
    float  iret = 0.0;
     iret =  Avarage(ivalue1 , ivalue2, ivalue3);

    printf(" Avarge is ....:%f\n",iret);

    return 0;
}