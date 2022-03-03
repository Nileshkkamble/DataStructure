//This Program Takes 10 values from the user and store them 
//Print the Stored elements in an Array

#include <stdio.h>

int main()
{
 char c[100]= "================Array Insertion======================\n";
 printf("%s",c);

  int values[10];//Array of size 10
  
  printf("Enter 10 int Elements:\n");

    //Taking input and Storing it in an array

    for(int i=0;i<10;i++)
    {
      scanf("%d", &values[i]);
    }
  printf("Displaying Integers:\n");

  
 
  //Printing the array elements

  for(int i=0;i<10;i++)
  {
    printf(" %d\n" , values[i]);
  }
 
  printf("%s",c);
  return 0;
                                                               //@nileshkamble
}
