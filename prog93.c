
 #include<stdio.h> // for printf scanf
 #include<stdlib.h> // Dynamic memory Allocation

// program Tital : give value From user in Array Check  Number checkNumber is ther which index not Array using Helper Function
   // Date /8/12/2021/ 
   // serach  Number is there or not  in Arrayy
   // using malloc function for Dynamic memory Allocation 
   // int Addition(int Brr[])   we can use *Brr not need use to int Brr[]
 
 int FirstOccurance(int Arr[],int isize, int ino)
{

    int i = 0;
    //    1        2        3
    for(i = 0; i <isize; i++)
    {
         if(Arr[i] == ino) // 4   i gives Actual index
         {   break;      }
             
    }
    
 if(i == isize)
 
 {  return -1; }
 
 else
 
  {  return i; }
 

}

int main()
{
    int iLength = 0, i = 0, iValue = 0,iRet = 0;
    int *ptr = NULL;
    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    ptr = (int *)malloc(sizeof(int) * iLength); // Daynamic memory Allocation
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to seach\n");
    scanf("%d",&iValue);
    iRet = FirstOccurance(ptr,iLength,iValue);  /// Function call
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Number is there at index : %d\n",iRet);
    }
    free(ptr);
    return 0;
}