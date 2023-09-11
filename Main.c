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


// Macro definitions
#define ROWS   3
#define COLS   4
#define FILL_MATRIX_A            1
#define FILL_MATRIX_B            2
#define PRINT_FILED_MATRIX_A_B   3
#define ADDITION_OF_MATRICES     4


// Global variables.
int matrix_A[ROWS][COLS];
int matrix_B[ROWS][COLS];
int matrix_C[ROWS][COLS];


// All function prototypes.
void Print_menu();
void Fill_the_matrix_A();
void Fill_the_matrix_B();
void Print_filed_matrix_A_B();
void Addition_of_matrices();


// This will print main menu.
void Print_menu()
 {
    printf("\n\n");
    printf("\t\t****************************************************************\n");
    printf("\t\t*         Welcome to my new project Working with matrices     *\n");
    printf("\t\t****************************************************************\n\n");
    printf("\t\t\t1) Fill matrix A \n\n");
    printf("\t\t\t2) Fill matrix B \n\n");
    printf("\t\t\t3) Print filed matrix A and B\n\n");
    printf("\t\t\t4) Addition matrix A to matrix B and show result in matrix C \n\n");
    printf("\n\n");
    printf("\t\t\t\tEnter your choice : ");
    fflush(stdout);
 }


//This function will fill matrix A
void Fill_the_matrix_A()
 {
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("\n\t\t\t\t******************************************************************************\n");
			printf("\t\t\t\t*                           Please fill out the matrix A                       *\n");
			printf("\t\t\t\t******************************************************************************\n\n\n");
			printf("\t\t\t\tMatrix A: [%d][%d] = ", i, j);
			fflush(stdout);
			scanf("%d",&matrix_A[i][j]);
		}
	}
 }


//This function will fill matrix B
void Fill_the_matrix_B()
 {
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("\n\t\t\t\t******************************************************************************\n");
			printf("\t\t\t\t*                           Please fill out the matrix B                       *\n");
			printf("\t\t\t\t******************************************************************************\n\n\n");
			printf("\t\t\t\tMatrix B: [%d][%d] = ", i, j);
			fflush(stdout);
			scanf("%d",&matrix_B[i][j]);
		}
	}
 }


//This function will print filed matrix A and B.
void Print_filed_matrix_A_B()
 {
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("\t\t\t\tMATRIX A = [%d][%d] = [%d] ", i, j, matrix_A[i][j]);
			fflush(stdout);
		}
	}

	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			printf("\t\t\t\tMATRIX B = [%d][%d] = [%d] ", i, j, matrix_B[i][j]);
			fflush(stdout);
		}
	}
 }


//This function will addition matrix A to matrix B and show result in matrix C.
void Addition_of_matrices()
 {
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
	    {
			matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
	    }

		printf("\n\t\t\t\t******************************************************************************\n");
		printf("\t\t\t\t*                      Result: Matrix A + Matrix B                            *\n");
		printf("\t\t\t\t******************************************************************************\n\n\n");

		for(int i = 0; i < ROWS; i++)
		{
			for(int j = 0; j < COLS; j++)
			{
				printf("\t\t\t\tMATRIX C = [%d][%d] = [%d] ", i, j, matrix_C[i][j]);
		                fflush(stdout);
		        }
		}
 }


int main()
 {
	printf("\t\t\t\t Hoces li");
	fflush(stdout);
	/*printf("\n\n");
	printf("\t\t****************************************************************\n");
	printf("\t\t*         Welcome to my new project Working with matrices     *\n");
	printf("\t\t****************************************************************\n\n");
	printf("\t\t\t1) Fill matrix A \n\n");
	printf("\t\t\t2) Fill matrix B \n\n");
	printf("\t\t\t3) Print filed matrix A and B\n\n");
	printf("\t\t\t4) Addition matrix A to matrix B and show result in matrix C \n\n");
	printf("\n\n");
	printf("\t\t\t\tEnter your choice : ");
	fflush(stdout);
	*/
	int choice;

	//while(1)
		for(int k=0; k<500; k++)
	{
		void Print_menu();

		scanf("%d",&choice);

		switch(choice)
		{
			case FILL_MATRIX_A:
			{
				Fill_the_matrix_A();
			}
			break;

			case FILL_MATRIX_B:
			{
				Fill_the_matrix_B();
			}
			break;

			case PRINT_FILED_MATRIX_A_B:
			{
				Print_filed_matrix_A_B();
			}
			break;

			case ADDITION_OF_MATRICES:
			{
				Addition_of_matrices();
			}
			break;

		}
	}

	return 0;
 }
















