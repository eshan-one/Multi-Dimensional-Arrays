#include<stdio.h>
int main()
{
   int a[100][100];

   int x,y;

   printf("Enter the dimensions of the matrix:\n");
   scanf("%d%d", &x,&y);

   printf("\nEnter %d elements:\n", x*y);

   int i,j;

   for(i=0;i<x;i++)
   {
    for(j=0;j<y;j++)
    {
        scanf("%d", &a[i][j]);
    }
   }

   for (i = 0; i < x; i++)
   {
       for (j = 0; j < y; j++)
       {
            printf(" %d ", a[i][j]);
       }

       printf("\n");
   }

   printf("\nThe lower triangular matrix of the matrix is:\n");

   for (i = 0; i < x; i++)
   {
       for (j = 0; j < y; j++)
       {
        // All the elements which lie above the diagonal should be zero..in order for that matrix
        // to be lower triangular
          if(i<j)
          {
            a[i][j] = 0;
          }

          printf(" %d ", a[i][j]);


       }

       printf("\n");
   }

        return 0;
}
