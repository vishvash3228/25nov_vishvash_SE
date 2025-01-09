#include <stdio.h>
main() 
{
    int matrix[3][3], sum = 0;

    printf("Enter 9 integers for the two-dimensional array:\n");
    for (int i=0; i<3; i++)
     {
        for (int j=0; j<3; j++)
	   {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nTwo-dimensional array  elements:\n");
    
    for (int i=0;i<3;i++)
     {
        for (int j=0;j<3;j++)
	   {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<3;i++)
     {
        for (int j=0;j<3;j++)
	   {
            sum += matrix[i][j];
        }
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

}

