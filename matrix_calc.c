#include <stdio.h>
#include "matrix.h"


int main(void){
    struct matrix matrix_A={{{1,2,3},{4,5,6},{7,8,9}}, 3, 3};
    struct matrix matrix_B={{{0,1},{1,2},{3,4}}, 3, 2};
    struct matrix matrix_C = {{0}, 0, 0};
    
    print_matrix(matrix_A);
    print_matrix(matrix_B);
    multiplication_matrix(&matrix_C,matrix_A,matrix_B);
    print_matrix(matrix_C);


    if (matrix_A.rows!=matrix_B.cols)
    {
        printf("Chyba\n");
        return 0;
    }
    
    return 0;
}


