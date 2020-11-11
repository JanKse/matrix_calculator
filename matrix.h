#pragma once

struct matrix
{
    int **element;
    int rows, cols;
};

void print_matrix(struct matrix X);
void print_matrices(struct matrix A, struct matrix B);
void multiplication_matrix(void);
void adding_matrices(void);
void subtracting_matrices(void);
void scalar_multiplication(void);
void matrix_transposition(void);
int menu(void);
struct matrix get_matrix(void);
struct matrix allocate_memory_for_matrix(int m, int n, struct matrix);
void free_matrix(struct matrix A);