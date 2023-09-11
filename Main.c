/*
Author : Goran Vujnovic
Project Name : Working with matrices
Date created : 11/09/2023
Description :

*/

// Included the headers
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>




void fillMatrix(int matrix[3][4], int rows, int cols, char fillType)
{
	if(fillType == 'A')
	{
		int value = 1;

		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
			{
				matrix[i][j] = value++;

			}
		}
	}

	else if(fillType == 'B')
	{
		int value = 12;

		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
			{
				matrix[i][j] = value--;

			}
		}
	}

 }


void printMatrix(int matrix[3][4], int rows, int cols)
 {
	for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
			{
				printf("\t[%d][%d]=[%d]\n", i, j, matrix[i][j]);
				fflush(stdout);
			}
		}
 }


int additionMatrices(int matrix_A[3][4], int matrix_B[3][4], int matrix_C[3][4] , int rows, int cols)
{
	for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
		    {
				matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
		    }

		}
			for(int i = 0; i < rows; i++)
			{
				for(int j = 0; j < cols; j++)
				{
					printf("\t[%d][%d] = [%d]\n", i, j, matrix_C[i][j]);
			        fflush(stdout);
			    }
			}
}

int main()
{
	int rows = 3;
	int cols = 4;
	int matrix_A[3][4];
	int matrix_B[3][4];
	int matrix_C[3][4];

    fillMatrix(matrix_A, rows, cols, 'A');
    fillMatrix(matrix_B, rows, cols,  'B');
    printf("Matrica A:\n");
    printMatrix(matrix_A, rows, cols);
    printf("\n");
    printf("Matrica B:\n");
    printMatrix(matrix_B, rows, cols);
    printf("\n");
    printf("Matrica C:\n");
    additionMatrices(matrix_A, matrix_B, matrix_C , rows, cols);

    return 0;
}














