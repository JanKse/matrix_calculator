#include <stdio.h>
#include "matrix.h"


int main(void){
    int choice;
    struct matrix matrix_A={{{1,2,3},{4,5,6},{7,8,9}}, 3, 3};
    struct matrix matrix_B={{{1,2,3},{4,5,6},{7,8,9}}, 3, 3};
    struct matrix matrix_C = {{0}, 0, 0};
    int scalar=2;
    
    
   do {
    choice = menu();
    switch (choice) {
    case 1:
      adding_matrices(matrix_A, matrix_B);
      break;
    case 2:
      subtracting_matrices(matrix_A, matrix_B);
      break;
    case 3:
      scalar_multiplication(scalar,matrix_A);
      break;
    case 4:
      multiplication_matrix(matrix_A, matrix_B);
      break;
    case 5:
      matrix_transposition(matrix_A);
      break;
    }
  } while (choice != 6);
    
    return 0;
}


