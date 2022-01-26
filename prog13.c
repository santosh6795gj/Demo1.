#include<stdio.h>

// program titale > Accept Number From user and Dsiplay Number on that Number
// exmple give number 7 
// Display ... 1234567
// Date 5/12/2021


void Display(int); // function Declration

int main()
{
    int ivalue = 0;
    printf(" Enter the Number\n");
    scanf("%d",&ivalue);

    Display (ivalue);

    return 0;
}

void Display(int ino) // function Defination
{
    int i = 0;
    for(i = 0; i<=ino; i++)

    printf("%d",i);

}