#include <stdio.h>
#include "matrix.h"

void print_matrix(struct matrix X){
    printf("\n");
    for (int i = 0; i < X.rows; i++)
    {
        for(int j=0; j<X.cols;j++){
             printf("%.3f\t",X.elements[i][j]);
        };
        printf("\n");
    }
    printf("\n");
}

void multiplication_matrix(struct matrix *Z, struct matrix X, struct matrix Y){
   Z->cols=X.cols;
   Z->rows=Y.rows;
    int k;
    for (int i = 0; i < Z->rows; i++)
    {
        for (int j = 0; j < Z->cols; j++)
        { 
            for (Z->elements[i][j],k=0; k < X.cols; k++)
            {
                Z->elements[i][j]+=X.elements[i][k]*Y.elements[k][j];
            }
            
        }
    }
}