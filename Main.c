/*
Author : Goran Vujnovic
Project Name : Working with matrices
Date created : 11/09/2023
Description :The program asks the user to enter values for matrix A and B,
             then adds those two matrices and displays the result of the addition.
*/


// Included the headers
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>


//This function will fill matrices.
void fillMatrix(int *matrix, int N, int M, char fillType)
 {
	if(fillType == 'A')
	{
		int value = 1;

		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				/* [i * M + j] -> i = row, M = matrix column number, j = cols */
				matrix[i * M + j] = value++;
			}
		}
	}

	else if(fillType == 'B')
	{
		int value = (N*M);

		for(int i = N-1; i >= 0; i--)
		{
			for(int j = 0; j < M; j++)
			{
				/* [i * M + j] -> i = row, M = matrix column number, j = cols */
				matrix[i * M + j] = value--;
			}
		}
	}

 }


//This function will print matrices.
void printMatrix(int *matrix, int N, int M)
 {
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			printf("\t%d", matrix[i * M + j]);
			fflush(stdout);
		}
		printf("\n");
	}
 }


//This function will add matrices A and B to matrix C.
void additionMatrices(int *matrix_A, int *matrix_B, int *matrix_C, int N, int M)
 {
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			matrix_C[i * M + j] = matrix_A[i * M + j] + matrix_B[i * M + j];
		}
	}

 }


int main()
 {
	int N, M;

	printf("Enter the number of rows from 2 to 10 : ");
	fflush(stdout);
	scanf("%d",&N);

	if(N < 2 || N > 10)
	{
		printf("\n");
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

	/* Allocated dynamic memory for the whole matrix */
	int *matrix_A = malloc(sizeof(int) * N * M);
	int *matrix_B = malloc(sizeof(int) * N * M);
	int *matrix_C = malloc(sizeof(int) * N * M);

        /* Call function to fill the matrix A */
        fillMatrix(matrix_A, N, M, 'A');

        /* Call function to fill the matrix B */
        fillMatrix(matrix_B, N, M,  'B');

        /* Call function to print the matrix A */
        printf("Matrix A:\n");
        fflush(stdout);
        printMatrix(matrix_A, N, M);
        printf("\n");

        /* Call function to print the matrix B */
        printf("Matrix B:\n");
        printMatrix(matrix_B, N, M);
        printf("\n");

        /* Call function to adding matrices A and B */
        additionMatrices(matrix_A, matrix_B, matrix_C , N, M);
        printf("Matrix C:\n");
        printMatrix(matrix_C, N, M);


        return 0;
 }














