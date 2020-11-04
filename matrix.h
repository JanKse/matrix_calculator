#pragma once

struct matrix
{
    double element[10][10];
    int rows, cols;
};

void print_matrix(struct matrix X);
void multiplication_matrix(struct matrix X, struct matrix Y);
void adding_matrices(struct matrix A, struct matrix B);
void subtracting_matrices(struct matrix A, struct matrix B);
int menu(void);