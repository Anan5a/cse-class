#include <stdio.h>

int sum_odd(int, int);

int main()
{
    int T, i;
    scanf("%d", &T);
    int cases[T][2];

    for(i=0; i<T; i++)
    {
        scanf("%d\n%d", &cases[i][0], &cases[i][1]);
    }

    for(i=0; i<T; i++)
    {
        printf("Case %d: %d\n", i+1, sum_odd(cases[i][0], cases[i][1]));
    }

    return 0;
}

int sum_odd(int a, int b){
    int sum = 0,i;
    for(i=a;i<=b;i++){
        if(i%2 == 0){
            continue;
        }
        sum += i;
    }
    return sum;
}
