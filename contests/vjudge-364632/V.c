#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    int cases[T][51];

    for(i=0; i<T; i++)
    {
        scanf("%d", &cases[i][0]);
        for(j=1; j<=cases[i][0]; j++)
        {
            scanf("%d", &cases[i][j]);
        }
    }

    for(i=0; i<T; i++)
    {
        int hi = 0, lo = 0;

        for(j=1; j<=cases[i][0]; j++)
        {
            if(cases[i][j+1] == cases[i][j])
            {
                continue;
            }
            if(cases[i][j+1] > cases[i][j] && j<cases[i][0])
            {
                hi++;
                continue;
            }
            if(cases[i][j+1] < cases[i][j] && j<cases[i][0])
            {
                lo++;
                continue;
            }
        }
        printf("Case %d: %d %d\n", i+1, hi, lo);
        hi = 0;
        lo = 0;
    }

    return 0;
}
