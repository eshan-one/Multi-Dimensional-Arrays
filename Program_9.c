#include<stdio.h>
int main()
{
  int a[3][3];

  printf("Enter 9 elements:\n");
  int i,j;
  // We will use the datatype of the count variable as float.
  // This is because if we divide an odd number by 2 (in order to get the 50% of the total elements)
  // the result will be a floating point number
  float count = 0.00;
  
  for(i=0;i<3;i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a[i][j]);
      printf(" %d ", a[i][j]);
    }
    // We print the matrix after the user emters 9 numbers

    printf("\n");

    
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if(a[i][j]==0)
      // Checking whether each element in the matrix equals to 1
      {
        count++;
        // If so then we increase the value of count.
      }

    }
      
  }

  float fifty;
  // Declaring another float variable so that we can compare count to that 
  fifty = 9.0/2.0;

  if(count>=fifty)
  // Example count = 4 and fifty = 4.5 
  // In that case the matrix is suppose to be a dense matrix

  //  if number of zeroes >=5 in a 3by3 matrix, only then it is a sparse
  {
    printf("\nThe above matrix is sparse");
  }

  else
  {
    printf("\nThe above matrix is dense");
    // If no. of zeroes <=4 in a 3by3 matrix, then it is dense
  }

  return 0;
}
