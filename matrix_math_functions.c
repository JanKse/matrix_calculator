#include <stdio.h>

#include "matrix.h"

#include <stdlib.h>

void adding_matrices(void) {
  int y_n = 121;
  
  do {
    system("cls");
    struct matrix A=get_matrix();
    struct matrix B=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    printf("\n########################## ADDING MATRICES ##########################\n\n");
    printf("\n_______________ YOUR MATRICES _______________\n");
    print_matrices(A,B);
    printf("___________________________________________\n\n");

    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] + B.element[i][j];
        }
      }
      printf("_______________ RESULT ____________________\n");
      print_matrix(Z);
      printf("___________________________________________\n\n");
      free_matrix(A);
      free_matrix(B);
      free_matrix(Z);
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot adding matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }

  } while (y_n != 'y');

}

void subtracting_matrices(void) {
  int y_n = 121;
  
  do {
    system("cls");
    struct matrix A=get_matrix();
    struct matrix B=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    printf("\n########################## SUBTRACING MATRICES ##########################\n\n");
    printf("\n_______________ YOUR MATRICES _______________\n");
    print_matrices(A,B);
    printf("___________________________________________\n\n");
    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] - B.element[i][j];
        }
      }
      printf("_______________ RESULT ____________________\n");
      print_matrix(Z);
      printf("___________________________________________\n\n");
      free_matrix(A);
      free_matrix(B);
      free_matrix(Z);
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot subtracting matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }

  } while (y_n != 'y');

}

void multiplication_matrix(void) {
  int y_n = 121;
  
  int k;
  do {
    system("cls");
    struct matrix A =get_matrix();
    struct matrix B =get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,B.cols,Z);
    
    printf("\n########################## MULTIPLICATION MATRICES ##########################\n\n");
    printf("\n_______________ YOUR MATRICES _______________\n");
    print_matrices(A,B);
    printf("___________________________________________\n\n");

    if (A.rows == B.cols && A.cols == B.rows) {
      for (int i= 0; i < Z.rows; i++)
      {
        for (int j = 0; j < Z.cols; j++)
        {
          Z.element[i][j]=0;
        }
        
      }
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          for (Z.element[i][j], k = 0; k < A.cols; k++) {
            Z.element[i][j] += A.element[i][k] * B.element[k][j];
          }
        }
      }
      
      printf("_______________ RESULT ____________________\n");
      print_matrix(Z);
      printf("___________________________________________\n\n");
      free_matrix(A);
      free_matrix(B);
      free_matrix(Z);
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot subtracting matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }
    printf("%d", y_n);
  } while (y_n != 'y');

}
void scalar_multiplication(void){
int y_n=121; 
do
{
  system("cls");
  struct matrix A=get_matrix();
  int scalar=get_scalar();
  printf("\n########################## SCALAR MULTIPLACATION ##########################\n\n");
  printf("\n_______________ YOUR SCALAR _______________\n");
  printf("\t%d",scalar);
  printf("\n___________________________________________\n\n");
  printf("\n_______________ YOUR MATRIX _______________\n");
  print_matrix(A);
  printf("___________________________________________\n\n");
  for (int i = 0; i < A.rows; i++)
  {
    for (int j = 0; j < A.cols; j++)
    {
      A.element[i][j]*=scalar;
    }
    
  }
  printf("_______________ RESULT ____________________\n");
  print_matrix(A);
  printf("___________________________________________\n\n");
  free_matrix(A);
  printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);

} while (y_n!='y');

}

void matrix_transposition(void){

  
  
  int y_n=121;
  do
  {
    system("cls");
    struct matrix A=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    system("cls");
    printf("\n########################## MATRIX TRANSPOSITION ##########################\n\n");
    printf("\n_______________ YOUR MATRIX _______________\n");
    print_matrix(A);
    printf("___________________________________________\n\n");
    for (int i = 0; i < A.rows; i++)
    {
      for (int j = 0; j < A.cols; j++)
      {
        Z.element[i][j]=A.element[j][i];
      }
      
    }
  printf("_______________ RESULT ____________________\n");
  print_matrix(Z);
  printf("___________________________________________\n\n");
  free_matrix(A);
  free_matrix(Z);
  printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
  } while (y_n!='y');
  
  
}