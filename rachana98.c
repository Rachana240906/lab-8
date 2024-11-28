#include <stdio.h>
#include <stdlib.h>
void inputMatrix(int **matrix, int rows, int cols) 
{
	int i,j;
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) 
{
	int i,j;
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int **mat1, int **mat2, int **result, int r1, int c1, int c2) 
{
	int i,j,k;
    for (i = 0; i < r1; i++) 
	{
        for (j = 0; j < c2; j++) 
		{
            result[i][j] = 0;
            for (k = 0; k < c1; k++) 
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() 
{
    int r1, c1, r2, c2,i;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
	{
        printf("Matrix multiplication not possible. No of columns of first must equal rows of second matrix.\n");
        return 1;
    }
    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    int **result = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) 
	mat1[i] = (int *)malloc(c1 * sizeof(int));
    for (i = 0; i < r2; i++)
	mat2[i] = (int *)malloc(c2 * sizeof(int));
    for (i = 0; i < r1; i++) 
	result[i] = (int *)malloc(c2 * sizeof(int));
    printf("\nEnter elements of the first matrix:\n");
    inputMatrix(mat1, r1, c1);
    printf("\nEnter elements of the second matrix:\n");
    inputMatrix(mat2, r2, c2);
    multiplyMatrices(mat1, mat2, result, r1, c1, c2);
    printf("\nProduct of the matrices:\n");
    printMatrix(result, r1, c2);
    for (i = 0; i < r1; i++) 
	free(mat1[i]);
    for (i = 0; i < r2; i++) 
	free(mat2[i]);
    for (i = 0; i < r1; i++) 
	free(result[i]);
    free(mat1);
    free(mat2);
    free(result);
    return 0;
}
