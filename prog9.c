#include<stdio.h>




void Display();  // function Declration 

int main()
{

    Display();   // Funtion  call 

    return 0;
}

void Display()   // Function Defintion 
{
    int i = 0;
    for(i = 1; i<=5; i++)
    {
        printf(" # ",i);

    }
}