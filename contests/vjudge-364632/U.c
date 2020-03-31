#include <stdio.h>

int main()
{
    int T, i, j, begin_pass = 0, passed = 0;
    scanf("%d", &T);
    int cases[T][3];//0 - N, 1 - K, 2 - P

    for(i=0; i<T; i++)
    {
        scanf("%d %d %d", &cases[i][0], &cases[i][1], &cases[i][2]);
    }

    for(i=0; i<T; i++)
    {
        begin_pass = cases[i][1];

repass1:
        for(j=begin_pass; j<=cases[i][0]; j++)
        {
            if(passed == cases[i][2])
            {
                printf("Case %d: %d\n", i+1, j);
                break;
            }
            if(j == cases[i][0])
            {

                passed++;

                begin_pass = 1;
                goto repass1;
            }
            passed++;
        }
        begin_pass = 0;
        passed = 0;

    }
    return 0;
}
