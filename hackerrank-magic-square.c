#include <stdio.h>

int main()
{
    int matrix[3][3] = {5,3,4,1,5,8,6,4,2} ,i,j,k=0,cost=0,tmp[3][3], nb = 0, col = 0, tmp_sum_col=0,tmp_sum_row=0;

   // for(i=0;i<3;i++){
     //   for(j=0;j<3;j++){
       //     scanf("%d", &matrix[i][j]);
        //}
    //}

    //logic
    while(k<3){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                tmp_sum_row += matrix[i][j];
                tmp_sum_col += matrix[j][i];
            }

            printf("col=%d row=%d\n", tmp_sum_col, tmp_sum_row);


        }
        if(tmp_sum_row == tmp_sum_col){
            nb = tmp_sum_col;
        }

        k++;
        break;
    }

    printf("%d\n", nb);
}
