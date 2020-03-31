#include <stdio.h>

int main()
{
    int T,i, MAX=20;
    scanf("%d", &T);
    int temp[T][3];

    for(i=0; i<T; i++)
    {
        scanf("%d %d %d", &temp[i][0], &temp[i][1], &temp[i][2]);
    }

    for(i=0; i<T; i++)
    {
        if(temp[i][0] > MAX || temp[i][1] > MAX || temp[i][2] > MAX){
            printf("Case %d: bad\n", i+1);
            continue;
        }
        printf("Case %d: good\n", i+1);
    }
    return 0;
}
