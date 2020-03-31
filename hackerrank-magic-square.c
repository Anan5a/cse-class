#include <stdio.h>
#include <math.h>

int main()
{
    int matrix[3][3],i,j,k=0,cost=0,tmp=0, nb = 0, col = 0, row=0, tmp_sum_col=0,tmp_sum_row=0,li=0, f = 0;;
    int uniq[9] = {0,0,0,0,0,0,0,0,0}, rep[9] = {0,0,0,0,0,0,0,0,0}, repi[9][2], uc=0, rc = 0, rep_=0, tmp_cost=0,stop=0;
    int sum = 15;//expected after replacement

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    int tmp_matrix[3][3];
//copy matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            tmp_matrix[i][j] = matrix[i][j];
        }
    }


    while(stop == 0)
    {
        tmp_sum_row = 0;
        tmp_sum_col =0;
//replace
        printf("\n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d ", tmp_matrix[i][j]);
            }
            printf("\n\n");
        }
//scan row
        for(i=0; i<3; i++)
        {
            tmp_sum_row += tmp_matrix[row][i];
        }
        for(i=0; i<3; i++)
        {
            tmp_sum_col += tmp_matrix[col][i];

        }

        //for next col-row
        if((tmp_sum_col == tmp_sum_row) && tmp_sum_col < sum && tmp_sum_row < sum)
        {
            //problem at index [col][row]
            int replacement = sum - tmp_sum_col;
            tmp_matrix[col][row] = tmp_matrix[col][row]+replacement;
            tmp_cost += replacement;
        }

        int di[2];
        int has_dupl = check_duplicate(tmp_matrix, 9, di);

        if(has_dupl == 0){
            break;
        }
        printf("di %d %d", di[0], di[1]);
        stop=1;

    }


    printf("\n");
    li=0;


    printf("sum_col = %d sum_row = %d col=%d row=%d\n", tmp_sum_col, tmp_sum_row,col,row);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", tmp_matrix[i][j]);
        }
        printf("\n");
    }

    printf("\ndup ind = %d\n", check_duplicate(tmp_matrix, 9));

}


int check_duplicate(int *matrix, int ind, int *di)
{
    int uniq[ind], rep[ind], repi[ind][2],i,j,k,rc=0,uc=0,f=0;
    for(i=0; i<ind; i++)
    {
        int tmp = *(matrix+i);

        //search
        for(k=0; k<ind; k++)
        {
            if(uniq[k] == tmp && uniq[k] != 0)
            {
                printf("rc=%d i=%d\n", rc,i);
                rep[rc] = tmp;
                int r3 = i-2;
                int r2 = r3 - 3;
                int r1 = r2 -3;

                repi[rc][0] = i-3;
                repi[rc][1] = j;
                *(di) = i;
                *(di+1) = j;
                return 1;
                rc++;
                f=1;
                break;
            }
        }
        if(f==0)
        {

            for(k=0; k<ind; k++)
            {
                if(uniq[k] != tmp)
                {
                    uniq[uc] = tmp;
                    uc++;
                    break;
                }

            }

            //break;
        }
        f = 0;
    }
    return 0;
//End separation!
}

void update(int *matrix, int ind)
{

}
