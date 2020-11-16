#include <stdio.h>

#include "matrix.h"

#include <stdlib.h>

void adding_matrices(void) {
  int y_n = 121;
  
  do {
    system("cls");
    printf("\n Please write your matrices : \n");
    struct matrix A=get_matrix();
    struct matrix B=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    system("cls");
    printf("\n########################## ADDING MATRICES ##########################\n\n");
    
    print_matrices(A,B, "YOUR MATRICES");
    

    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] + B.element[i][j];
        }
      }
      print_matrix(Z, "RESULT");
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
    printf("\n Please write your matrices : \n");
    struct matrix A=get_matrix();
    struct matrix B=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    system("cls");
    printf("\n########################## SUBTRACING MATRICES ##########################\n\n");
    print_matrices(A,B, "YOUR MATRICES");
    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] - B.element[i][j];
        }
      }
      print_matrix(Z, "RESULT");
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
    printf("\n Please write your matrices : \n");
    struct matrix A =get_matrix();
    struct matrix B =get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,B.cols,Z);
    system("cls");
    printf("\n########################## MULTIPLICATION MATRICES ##########################\n\n");
    print_matrices(A,B, "YOUR MATRICES");

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
      print_matrix(Z, "RESULT");
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
  printf("\n Please write your matrix and scalar : \n");
  struct matrix A=get_matrix();
  int scalar=get_scalar();
  system("cls");
  printf("\n########################## SCALAR MULTIPLACATION ##########################\n\n");
  printf("\n_______________ YOUR SCALAR _______________\n");
  printf("\t%d",scalar);
  printf("\n___________________________________________\n\n");
  print_matrix(A, "YOUR MATRIX");
  for (int i = 0; i < A.rows; i++)
  {
    for (int j = 0; j < A.cols; j++)
    {
      A.element[i][j]*=scalar;
    }
    
  }
  print_matrix(A, "RESULT");
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
    printf("\n Please write your matrix : \n");
    struct matrix A=get_matrix();
    struct matrix Z=allocate_memory_for_matrix(A.rows,A.cols,Z);
    system("cls");
    printf("\n########################## MATRIX TRANSPOSITION ##########################\n\n");
    print_matrix(A, "YOUR MATRIX");
    for (int i = 0; i < A.rows; i++)
    {
      for (int j = 0; j < A.cols; j++)
      {
        Z.element[i][j]=A.element[j][i];
      }
      
    }
  print_matrix(Z, "RESULT");
  free_matrix(A);
  free_matrix(Z);
  printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
  } while (y_n!='y');
  
  
}