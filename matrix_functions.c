#include <stdio.h>

#include "matrix.h"

#include <stdlib.h>

void print_matrix(struct matrix X) {
  printf("\n");
  for (int i = 0; i < X.rows; i++) {
    for (int j = 0; j < X.cols; j++) {
      printf("%.3f\t", X.element[i][j]);
    };
    printf("\n");
  }
  printf("\n");
}

int menu(void) {
  system("cls");
  int choice;
  printf("\n\n");
  printf("\t\t#######################\n");
  printf("\t\t#  MATRIX CALCULATOR  #\n");
  printf("\t\t#######################\n\n");
  for (int i = 0; i < 50; i++) {
    printf("#");
  }
  printf("\n\n");
  printf("[1]\t Adding matrices\n");
  printf("[2]\t Subtracting matrices\n");
  printf("[3]\t Scalar multiplication\n");
  printf("[4]\t Matrix multiplication\n");
  printf("[5]\t Matrix transposition\n\n");
  printf("[6]\t Exit aplication\n\n");
  for (int i = 0; i < 50; i++) {
    printf("#");
  }
  printf("\n\nEnter your choice : \t");
  scanf("%d", & choice);
  printf("%d", choice);
  return choice;
}

void adding_matrices(struct matrix A, struct matrix B) {
  int y_n = 121;
  struct matrix Z;
  do {
    system("cls");
    printf("\n########################## ADDING MATRICES ##########################\n\n");
    Z.rows = A.rows;
    Z.cols = A.cols;

    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] + B.element[i][j];
        }
      }
      printf("--------------- RESULT ---------------");
      print_matrix(Z);
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot adding matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }

  } while (y_n != 'y');

}

void subtracting_matrices(struct matrix A, struct matrix B) {
  int y_n = 121;
  struct matrix Z;
  do {
    system("cls");
    printf("\n########################## SUBTRACING MATRICES ##########################\n\n");
    Z.rows = A.rows;
    Z.cols = A.cols;
    if (A.rows == B.rows && A.cols == B.cols) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          Z.element[i][j] = A.element[i][j] - B.element[i][j];
        }
      }
      printf("--------------- RESULT ---------------");
      print_matrix(Z);
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    } else {
      printf("\n\nError... you cannot subtracting matrices with different columns or rows\n\n");
      printf("Do you want to return to main menu ? y/n : ");
      scanf("%s", & y_n);
    }

  } while (y_n != 'y');

}

void multiplication_matrix(struct matrix A, struct matrix B) {
  int y_n = 121;
  struct matrix Z = {
    {
      0
    },
    A.rows,
    B.cols
  };
  int k;
  do {
    system("cls");
    printf("\n########################## MULTIPLICATION MATRICES ##########################\n\n");
    if (A.rows == B.cols && A.cols == B.rows) {
      for (int i = 0; i < Z.rows; i++) {
        for (int j = 0; j < Z.cols; j++) {
          for (Z.element[i][j], k = 0; k < A.cols; k++) {
            Z.element[i][j] += A.element[i][k] * B.element[k][j];
          }
        }
      }
      printf("--------------- RESULT ---------------");
      print_matrix(Z);
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