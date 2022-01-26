#include<stdio.h>

void Display(int);    // Declration

int main()
{
    int ivalue = 0;
    printf("Enter the Number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}

 void Display(int ino)  // Function Defination
  {
    int i  = 0;

    if (ino == 0)
    {
        printf(" you Entred ...0th Number\n"); // warrnig you can Enterd 0 th Number
    }
    
    if (ino <0) // if give - value updator incrase there value
    {
        ino  = -ino;
    }
    
    for(i = 1; i<ino; i++)
    
     printf("%d",i);


}