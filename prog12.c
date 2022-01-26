#include<stdio.h>

   void Display(int );    // Function Declration 


int main()
{

  int ivalue = 0;
  printf(" Enter the Number\n");

  scanf("%d",&ivalue);
   
   Display(ivalue); //  Function call 

   return 0;
}

void  Display(int ino)   // Function Declration 
   {

    int i = 0;

    for(i = 0; i<ino; i++)
    {
        printf(" Marvellous");
    }
  }