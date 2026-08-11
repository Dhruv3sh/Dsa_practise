#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <ctype.h>

int main(){
    int r = 2;
    int c = 3;
    
    int matrix1[r][c] = {
        {1,2,4},
        {2,4,5}
    }; 
    int matrix2[r][c] = {
        {1,8,4},
        {2,4,10}
    }; 
    int sumMatrix[r][c]; 

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    };

    printf("Sum of Matrices = \n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}