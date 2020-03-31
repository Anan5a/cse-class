#include <stdio.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    int problems[T][2];

    for(i=0; i< T;i++){
        scanf("%d %d", &problems[i][0], &problems[i][1]);
    }
    for(i=0; i< T;i++){
        printf("Case %d: %d\n", i+1, (problems[i][0]+problems[i][1]));
    }
    return 0;
}
