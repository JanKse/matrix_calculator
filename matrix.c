#include <stdio.h>

void print_matrix(int matrix[10][10],int m, int n);
void multiplication_matrix(int matrix_X[10][10],int matrix_Y[10][10],int matrix_Z[10][10], int rx, int cx, int ry, int cy, int *rz, int* cz  );

int main(void){
    int matrix_A[10][10]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix_B[10][10]={{0,3,6},{4,5,6},{1,2,4}};
    int matrix_C[10][10];
    int ra=3,ca=3,rb=3,cb=3, rc, cc;
    print_matrix(matrix_A, 3,3);
    print_matrix(matrix_B, 3,3);
    multiplication_matrix(matrix_C,matrix_A,matrix_B, ra, ca,rb,cb,&rc,&cc);
    print_matrix(matrix_C, rc,cc);


    if (ra!=cb)
    {
        printf("Chyba\n");
        return 0;
    }
    
    return 0;
}


void print_matrix(int matrix[10][10],int m, int n){
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for(int j=0; j<n;j++){
             printf("%d\t",matrix[i][j]);
             //printf("\n");
        };
        printf("\n");
    }
    printf("\n");
}

void multiplication_matrix(int matrix_Z[10][10],int matrix_X[10][10],int matrix_Y[10][10], int rx, int cx, int ry, int cy, int *rz, int* cz  ){
    *rz=rx;
    *cz=cy;
    int k;
    for (int i = 0; i < *rz; i++)
    {
        for (int j = 0; i < *cz; j++)
        {
            
            for (matrix_Z[i][j]=k=0; k < cx; k++)
            {
                matrix_Z[i][j]+=matrix_X[i][k]*matrix_Y[k][j];
            }
            
        }
        
    }
}