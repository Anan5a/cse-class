#include <stdio.h>
#include <math.h>
void sort(unsigned long long int*, int);

int main()
{
    int T, i, j;

    scanf("%d", &T);

    unsigned long long int problems[T][3];
    for(i=0; i< T; i++)
    {
        scanf("%llu %llu %llu", &problems[i][0], &problems[i][1], &problems[i][2]);
    }

    for(i=0; i<T; i++)
    {
        sort(&problems[i], 3);

        int sum_ab = problems[i][0]+problems[i][1];
        if(sum_ab <= problems[i][2]){
            printf("Case %d: no\n", i+1);
            continue;
        }
        unsigned long long int sq_a = (problems[i][0]*problems[i][0]), sq_b = (problems[i][1]*problems[i][1]), sq_c = (problems[i][2]*problems[i][2]);
        if(sq_a+sq_b == sq_c)
        {
            printf("Case %d: yes\n", i+1);
            continue;
        }
        printf("Case %d: no\n", i+1);
    }

    return 0;
}

void sort(unsigned long long int *num, int m)
{
    unsigned long long int i,j;
    for(i=0; i<m-1; i++)
    {
        for(j=0; j<(m-1)-i; j++)
        {
            if(*(num+j) > *(num+j+1))
            {
                //swap
                int t = *(num+j);
                *(num+j) = *(num+j+1);
                *(num+j+1) = t;
            }
        }
    }
}
