#include<stdio.h>
//   Program Titale > Addition of 2 Number using 2  Function


int Addition(int no1 , int no2)
{

        return no1 + no2;

}

int main()
{
      int x,y,z;

      printf("Enter the Fisrt Number\n");
      scanf("%d",&x);

      printf("Enter the Second Number\n");
      scanf("%d",&y);

     z =  Addition(x,y);   // Function call

     printf(" Addition is ...:%d\n",z);

     return 0;
}


