#include<stdio.h>
int main()
{
    int n;
    int a[100][100];
    
    

    printf("Enter the size of the square matrix:\n");
    scanf("%d", &n);

    

    

    int i,j,sum=0;

    printf("\nEnter %d numbers:\n", n*n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
            printf(" %d ", a[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Here the index of the diagonal elements is a[0][0],a[1][1],a[2][2] and so on.
            if(i==j)
            {   
                sum = sum+a[i][j];
            }
        }
    }

    printf("\nSum of the left diagonals of the matrix is: = %d", sum);

    return 0;
    
}
