#pragma once

struct matrix
{
    double elements[10][10];
    int rows, cols;
};

void print_matrix(struct matrix X);
void multiplication_matrix(struct matrix *Z, struct matrix X, struct matrix Y);
