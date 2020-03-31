#include <stdio.h>

int check_already_exist(int*, int, int);

int main()
{
    int T, i, j, k, ae = 0, aet = 0;

    scanf("%d", &T);

    int problems[T];
    int already_exists[T], solution_bag[T][2][250];
    for(i=0; i< T; i++)
    {
        already_exists[i] = -1;

        for(k=0; k<2; k++)
        {
            for(j=0; j< 250; j++)
            {
                solution_bag[i][k][j] = 0;
            }
        }

    }
    for(i=0; i< T; i++)
    {
        scanf("%d", &problems[i]);

        aet = problems[i];
        ae = 0;
        int sbi = check_already_exist(already_exists, aet, T);
        if(sbi != -1)
        {
            /* A solution already printed. avoid that */
            if(aet > 10)
            {
                ae = aet - 10;
                aet = 10;
            }
            int tr = 0;
            while(check_already_exist(&solution_bag[sbi][0][1], ae, 249) != -1 || check_already_exist(&solution_bag[sbi][1][1], aet, 249) != -1)
            {
                tr++;
                if(tr >= 40)
                {
                    break;
                }
                aet--;
                ae++;
                if(aet < 0)
                {
                    aet++;
                }
                if(ae > 10)
                {
                    ae--;
                }
            }
            if(tr < 40)
            {
                printf("%d %d\n", ae, aet);
                solution_bag[sbi][0][solution_bag[sbi][0][0]+1] = ae;
                solution_bag[sbi][1][solution_bag[sbi][1][0]+1] = aet;
                solution_bag[sbi][0][0]++;
                solution_bag[sbi][1][0]++;
            }
        }
        else
        {

            /* Any solution is valid! */
            already_exists[i] = aet;
            if(aet > 10)
            {
                printf("%d %d\n", 10, aet - 10);
                solution_bag[i][0][solution_bag[i][0][0]+1] = 10;
                solution_bag[i][1][solution_bag[i][1][0]+1] = aet - 10;
                solution_bag[i][0][0]++;
                solution_bag[i][1][0]++;
                continue;
            }
            solution_bag[i][0][solution_bag[i][0][0]+1] = 0;
            solution_bag[i][1][solution_bag[i][1][0]+1] = aet;
            solution_bag[i][0][0]++;
            solution_bag[i][1][0]++;
            printf("%d %d\n", 0, aet);
        }

    }
}

int check_already_exist(int *arr, int chk, int len)
{
    int j;
    for(j=0; j<len; j++)
    {
        if(*(arr+j) == chk)
        {
            return j;
        }
    }
    return -1;
}
