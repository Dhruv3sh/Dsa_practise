#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <ctype.h>

int main(){
    int r = 3;
    int c = 3;
    int matrix1[r][c] = {
        {1,2,4},
        {2,4,9},
        {3,4,2}
    };
    int transposeMatrix[r][c];
    
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            transposeMatrix[j][i] = matrix1[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}