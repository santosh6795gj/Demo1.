
 #include<stdio.h> // for printf scanf
 #include<stdlib.h> // Dynamic memory Allocation

   // program Tital : give value From user in Array Check  Number checkNumber is ther which index not Array using Helper Function
   // Date /9/12/2021/ 
   // serach  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]
 

int LastOccurance(int Arr[],int isize, int ino)
{
     int i = 0;

     for ( i = isize-1; i>0; i--)
     {
         if(Arr[i] == ino)
         {    break;    }
     }
     if (i == -1)
     {
         return -1;
     }
     else
     {
         return i;
     }

}

int main()
{
    int iret = 0, ilenght = 0, i = 0, ivalue = 0;
    int *ptr = 0;
   
   printf(" Enter Number of Elements \n");
   scanf("%d",&ilenght);

 ptr = (int*) malloc (sizeof(int)* ilenght); // Dynamic memory Allocation

 printf("Enter Number\n");

 for( i = 0; i <ilenght; i++)
 {
      scanf("%d",&ptr[i]);
 }
 
 printf(" Enter search Number\n");
 scanf("%d",&ivalue);
 iret = LastOccurance(ptr,ilenght,ivalue); // Function call

   printf(" Number is there at index......: %d\n",iret);

   free(ptr);
   return 0;
}