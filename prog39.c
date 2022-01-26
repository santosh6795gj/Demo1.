#include<stdio.h>
#include<stdbool.h>
// program Tital Check Number is CheckPallindrome or not
// using seprate 2 Helper Function
// Date /6/12/2021/

bool CheckPallindrome(int);  // Function Declration 

int Revrse (int);  // Function Declration


int main()  // >>>>>>> Function NO ( 1 )
{
    int ivalue  = 0;
    bool iret = false;

    printf("Enter the Number\n");
    scanf("%d",&ivalue);

   iret =  CheckPallindrome(ivalue);  // Function call
   if (iret == true)
   {
       printf("Number is Pallindrome\n");
   }
   else
   {
       printf("Number is not Pallindrome");
   }
}

  bool  CheckPallindrome(int input) //  Function >>>>>>>>NO ( 3 )       Function Defination
 {
      int rNumber = 0;
      rNumber = Revrse(input);  // function 3 kdun 2 function call
     if(rNumber == input)       // revrse number and input number macth
     {
         return true;         // function call  main Function (1)
     }
     else
     {
         return false;
     }

 }

int Revrse (int ino) // >>>>>>>>>>>>> Funtion NO( 2 )            Function Defination
{

     int idigit = 0;
     int iRev = 0;

     if (ino<0)
     {
         ino = - ino;  // input updator
     }
     while (ino != 0)
     {
          idigit = ino %10; // Seprate reminder
          iRev = (iRev * 10) + idigit; // Count reminder
          ino = ino /10;
     }
     
     return iRev;           /// return reslut  call Checkpallindrome
}
