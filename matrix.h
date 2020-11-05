#pragma once

struct matrix
{
    double element[10][10];
    int rows, cols;
};

void print_matrix(struct matrix X);
void print_matrices(struct matrix A, struct matrix B);
void multiplication_matrix(struct matrix X, struct matrix Y);
void adding_matrices(struct matrix A, struct matrix B);
void subtracting_matrices(struct matrix A, struct matrix B);
void scalar_multiplication(int scalar, struct matrix A);
void matrix_transposition(struct matrix A);
int menu(void);