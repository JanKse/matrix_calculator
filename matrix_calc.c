#include <stdio.h>
#include "matrix.h"


int main(void){
    int choice;
   
    int scalar=2;
    
    
   do {
    choice = menu();
    switch (choice) {
    case 1:
      adding_matrices();
      break;
    case 2:
      subtracting_matrices();
      break;
    case 3:
      scalar_multiplication();
      break;
    case 4:
      multiplication_matrix();
      break;
    case 5:
      matrix_transposition();
      break;
    }
  } while (choice != 6);
    
    return 0;
}


