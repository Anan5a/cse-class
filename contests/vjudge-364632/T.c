#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    int cases[T][3];

    for(i=0; i<T; i++)
    {
        scanf("%d %d %d", &cases[i][0], &cases[i][1], &cases[i][2]);
    }

    for(i=0; i<T; i++)
    {
        if(cases[i][0]+cases[i][1] <= cases[i][2] || cases[i][0]+cases[i][2] <= cases[i][1] || cases[i][2]+cases[i][1] <= cases[i][0]){
            printf("WRONG!!\n");
        }else{
            printf("OK\n");
        }
    }

    return 0;
}

