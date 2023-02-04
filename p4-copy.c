#include <stdio.h>
int r1, r2, c1, c2, inpu=0;
int m1[1][1];
int m2[1][1];
long int m3[1][1];
long int m4[1][1];
void multiply(int a, int b, int c){
    
}
void add(int a , int b){
    printf("\nThe addition of matrices is as follows: \n");
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            m4[i][j]=m1[i][j]+m2[i][j];
            printf("%ld",m4[i][j]);
        }
        printf("\n");
    }
}
int main(){
    printf("Enter the row and column of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the row and column of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    int m1[r1][c1];
    int m2[r2][c2];
    long int m3[r1][c2];
    long int m4[r1][c1];    
    if(r1==r2 && c1==c2 && r2==c1){
        printf("\nWrite the matrix 1 with dimensions %d x %d\n", r1, c1);
        for(int i=0; i<r1; i++){
            /* printf("\nEnter the inputs for column %d of matrix 1 \n", i); */
            for(int k=0; k<c1; k++){
                scanf("%d",&inpu);
                m1[i][k]=inpu;
            }
        }
        printf("\nWrite the matrix 2 with dimensions %d x %d\n", r2, c2);
        for(int i=0; i<r2; i++){
            /* printf("\nEnter the inputs for column %d of matrix 1 \n", i); */
            for(int k=0; k<c2; k++){
                scanf("%d",&inpu);
                m1[i][k]=inpu;
            }
        }
        add(r1, c1);
        printf("\nThe multiplication of matrices are as follows: \n");int m1[r1][c1];
        int m2[r2][c2];
        for(int i=0; i<r1; i++){
            for(int k=0; k<c2; k++){
                m3[i][k]=0;
                for(int j=0; j<c1; j++){
                    m3[i][k]+=m1[i][j]*m2[j][k];
                }
            }
        }
        for(int i=0; i<a; i++){
            for(int k=0; k<c; k++){
                printf("%ld ",m3[i][k]);
            }
            printf("\n");
        };

    }
    else if(r1==r2 && c1==c2){
        printf("\nWrite the matrix 1 with dimensions %d x %d\n", r1, c1);
        for(int i=0; i<r1; i++){
            /* printf("\nEnter the inputs for column %d of matrix 1 \n", i); */
            for(int k=0; k<c1; k++){
                scanf("%d",&inpu);
                m1[i][k]=inpu;
            }
        }
        printf("\nWrite the matrix 1 with dimensions %d x %d\n", r2, c2);
        for(int i=0; i<r2; i++){
            /* printf("\nEnter the inputs for column %d of matrix 1 \n", i); */
            for(int k=0; k<c2; k++){
                scanf("%d",&inpu);
                m1[i][k]=inpu;
            }
        }
        add(r1, c1);
    }
    else if(r2!=c1){
        printf("Row of 2 and column of 1 should be same for matrix multiplication");
        printf("\nOr\nThe rows and columns should have the same length for matrix addition\n");
    }
    else{
        printf("\nWrite the matrix 1 with dimensions %d x %d\n", r1, c1);
        for(int i=0; i<r1; i++){
            /* printf("\nEnter the inputs for column %d of matrix 1 \n", i); */
            for(int k=0; k<c1; k++){
                scanf("%d",&inpu);
                m1[i][k]=inpu;
            }
        }
        printf("\nWrite the matrix 1 with dimensions %d x %d\n", r2, c2);
        for(int i=0; i<r2; i++){
            /* printf("\nEnter the inputs for column %d of matrix 1 \n", i); */
            for(int k=0; k<c2; k++){
                scanf("%d",&inpu);
                m1[i][k]=inpu;
            }
        }
        printf("\nThe multiplication of matrices are as follows: \n");int m1[r1][c1];
        int m2[r2][c2];
        for(int i=0; i<r1; i++){
            for(int k=0; k<c2; k++){
                m3[i][k]=0;
                for(int j=0; j<c1; j++){
                    m3[i][k]+=m1[i][j]*m2[j][k];
                }
            }
        }
        for(int i=0; i<a; i++){
            for(int k=0; k<c; k++){
                printf("%ld ",m3[i][k]);
            }
            printf("\n");
        };
    }
    return 0;
}
