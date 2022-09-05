#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100];

    int x,y;

    printf("Declare matrix dimension:\n");
    scanf("%d%d", &x,&y);

    // Total number of elements in a matrix of order x*y is product of x & y;

    printf("\nEnter %d numbers:\n", x*y);

    int i,j,k,sum1, sum2;

    // Same approach when finding sum as it is when multiplication of two matrices

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
            printf(" %d ", a[i][j]);
        }

        printf("\n");
    }

    for(i=0;i<x;i++)
    {
        for (j = 0; j < y; j++)
        {
            sum1 = 0;
            sum2 = 0;
            for (k = 0; k <= x; k++)
            {
                sum1 = sum1 + a[i][k];
            }

            b[i] = sum1;
            
        }

        
    }

    // Now we print the sum of rows.



    int row=1;
        for (i = 0; i < x; i++)
        {   
            printf("\nSum of row%d is %d ",row, b[i]);
            row++;
        }
// --------------------------********-------------------------------
        
        printf("\n");

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                
                sum2 = 0;
                for (k = 0; k <= y; k++)
                {
                    sum2 = sum2 + a[k][j];
                    
                }

                b[j] = sum2;
                
            }
        }

        // Now we print the sum of columns
        int column=1;

        for (j = 0; j < y; j++)
        {   
            printf("\nSum of column%d is %d ", column, b[j]);
            column+=1;
        }


        return 0;
}
