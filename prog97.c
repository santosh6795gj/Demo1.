#include<stdio.h>
// program Tital : print in Array Display String of character froum where to from  should 
// Date /9/12/2021/ 
// printf in  %s use printf the String


int main()
{

    char Arr[11] = " Marvellous";

    printf("%s\n",&Arr[0]);   // Marvellous
    printf("%s\n",&Arr[5]);   // llous
    printf("%s\n",&Arr[9]);   // s


    printf("%s\n",Arr);      // Marvellous
    printf("%s\n",Arr + 5);  // llous
    printf("%s\n",Arr + 9);  // s

  return 0;
}
