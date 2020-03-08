#include <stdio.h>

int main()
{
    int i,j,matrix[2][3] = {1,2,3,4,5,6}, matrix2[3][2] = {1,2,3,4,5,6},tmp[2][2];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("matrix[1]= %d matrix2 = %d", matrix[i][j], matrix2[j][i]);
        }
    }
}
