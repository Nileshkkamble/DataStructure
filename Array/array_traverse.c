#include <stdio.h>


void traverse(int* , int); /*function prototype for array traversal */
void main()
{
  int arr[5] = {2, 6, 7, 9, 8}; //values in the array
  int N=5;
  

  printf("Press any key to perform array traversal and display its elements \n\n ");
  

  traverse(arr,N); // Calling traverse function

  
}

void traverse(int *array, int size)
{
  int i;
  for (i=0;i<size;i++)
  {
    printf("arr[%d] = %d\n",i,array[i]); //accessing array elements and printing it

  }
}

