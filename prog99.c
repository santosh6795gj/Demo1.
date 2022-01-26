#include<stdio.h>
// program Tital : take  the  input in String From user Display his Name
// Date /9/12/2021/ 
// printf in  %s use printf the String



int main()
{
  char  Arr[50];
 
  printf(" Enter Your Name\n");
  scanf("%[^'\n]'s",Arr);  // your String will larage size you can use thies scanf Function

  printf(" Your Name is...:%s\n",Arr);

  return 0;
}