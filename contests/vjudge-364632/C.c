#include <stdio.h>
#include <math.h>

int main()
{
    int T, i, j;

    scanf("%d", &T);

    double  problems[T], pi = (2.0 * acos(0.0));
    for(i=0; i< T; i++)
    {
        scanf("%lf", &problems[i]);
    }

    for(i=0;i<T;i++){
        double  sq = pow(problems[i]*2.0, 2.0);
        double  circle = pi*pow(problems[i], 2.0);
        printf("Case %d: %.2lf\n", i+1, (sq-circle)+0.000000001);
    }

    return 0;
}
