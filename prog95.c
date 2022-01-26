   #include<stdio.h> // for printf scanf
   #include<stdlib.h> // Dynamic memory Allocation

   // program Tital : give value From user in Array Check  Number checkNumber is ther which index not Array using Helper Function
   // Date /9/12/2021/ 
   // serach  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]
 
  int LastOccurance(int Arr[], int isize, int ino)
{

   int i = 0, index =- 1;
   

   for ( i = 0; i < isize; i++)
   {
       if (Arr[i] == ino)
       {
             index = i;    //  Actual index milto
       }
       
   }
   
      return index;
}

int main()
{
    int iret = 0, i = 0, ilength = 0, ivalue = 0;
    int  *ptr = NULL;

    printf(" Enter Number of Elements \n");
    scanf("%d",&ilength);

    ptr = (int*) malloc (sizeof(int) * ilength); /// Daynamic memory Allocation

    printf("Enter Number\n");

    for ( i = 0; i <ilength; i++)
    {
         scanf("%d",&ptr[i]);
    }
    
    printf("Enter Number of Search\n");
    scanf("%d",&ivalue);

   iret = LastOccurance(ptr,ilength,ivalue); /// Function call
   
  if (iret == -1)
  {
      printf(" There is no such Number\n");
  }
  else
  {
      printf(" Number is there at index :%d\n",iret);
  }
  
  

  free(ptr);

  return 0;
 

}