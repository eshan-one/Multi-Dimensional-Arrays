#include<stdio.h>
int main()
{
    int a[3][3];
    int temp;
    int i,j;

    printf("Enter 9 Numbers:\n");

    

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);

            printf(" %d ", a[i][j]);


        }

        printf("\n");
    }

    

    printf("\nThe transpose of the matrix is:\n");

    // Equate the value of the index i.e i and j (of the transpose) to that of the original matrix.

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {

           printf(" %d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
