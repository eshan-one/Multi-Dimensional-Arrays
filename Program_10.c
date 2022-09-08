#include<stdio.h>
int main()
{
   int a[3][3];
  //  This is a brut force approach to solve this problem 
  // We will see how to optimize this using binary search and thus reduce the time complexity

   printf("Enter 9 elements:\n");
   int i,j;
   int maxOneCount = 0;
   
   int index = -1 ;
   

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d", &a[i][j]);
      printf(" %d ", a[i][j]);
    }
    printf("\n");
   }

   for (i = 0; i < 3; i++)
   { int rowOneCount =0;
     for (j = 0; j < 3; j++)
     {
       if(a[i][j] == 1)
       {
         rowOneCount = a[i][j] + rowOneCount;
       }
       

       
     }
     if (rowOneCount > maxOneCount)
     {
       maxOneCount = rowOneCount;
       index = i;
     }
   }

   printf("\nThe maximum number of 1s is in the %dth row", index);
  //  0-based indexing

   

        return 0;
}
