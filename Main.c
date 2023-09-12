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


void fillMatrix(int **matrix, int N, int M, char fillType)
{

	if(fillType == 'A')
	{
		int value = 1;

		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				matrix[i][j] = value++;

			}
		}
	}

	else if(fillType == 'B')
	{

		int value = N*M;

		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				matrix[i][j] = value--;

			}
		}
	}

 }


void printMatrix(int **matrix, int N, int M)
 {
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			printf("\t%d", matrix[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}
 }


void additionMatrices(int **matrix_A, int **matrix_B, int **matrix_C, int N, int M)
 {
	for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
		    {
				matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
		    }
		}
 }


int main()
{
	int N;  //rows
	int M; //cols

	printf("Enter the number of rows from 2 to 10 : ");
	fflush(stdout);
	scanf("%d",&N);

	if(N < 2 || N > 10)
	{
		printf("The number of rows must be from 2 to 10!\n");
		fflush(stdout);
		return 1;
	}

	printf("Enter the number of cols from 2 to 10 : ");
	fflush(stdout);
	scanf("%d",&M);

		if(M < 2 || M > 10)
		{
			printf("The number of cols must be from 2 to 10!\n");
			fflush(stdout);
			return 2;
		}

		/*https://www.youtube.com/watch?v=ZLc_OpzND2c*/
		int **matrix_A = malloc(sizeof(int *) * N);
		int **matrix_B = malloc(sizeof(int *) * N);
		int **matrix_C = malloc(sizeof(int *) * N);

		for(int i = 0; i < N; i++)
		{
			matrix_A[i] = malloc(sizeof(int *) * M);
			matrix_B[i] = malloc(sizeof(int *) * M);
			matrix_C[i] = malloc(sizeof(int *) * M);
		}


    fillMatrix(matrix_A, N, M, 'A');

    fillMatrix(matrix_B, N, M,  'B');

    printf("Matrix A:\n");
    fflush(stdout);
    printMatrix(matrix_A, N, M);
    printf("\n");

    printf("Matrix B:\n");
    printMatrix(matrix_B, N, M);
    printf("\n");


    additionMatrices(matrix_A, matrix_B, matrix_C , N, M);

    printf("Matrix C:\n");
    printMatrix(matrix_C, N, M);

    for (int i = 0; i < N; i++)
    {
    	free(matrix_A[i]);
        free(matrix_B[i]);
        free(matrix_C[i]);
    }
        free(matrix_A);
        free(matrix_B);
        free(matrix_C);

    return 0;
}














