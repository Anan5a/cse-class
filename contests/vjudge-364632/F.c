#include <stdio.h>
#include <math.h>

#define pi acos(-1.0)

int main()
{
    int T, i;
    scanf("%d", &T);
    double results[T];

    for(i=0; i<T; i++)
    {
        double result, r = 1, r1, r2, h, p;
        scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);
        /* Finding r at p */
        double h2 = 1;

        if(h == p)
        {
            r = r1;
        }
        else
        {
            h2 = h/(r1-r2);
            r = r1 - ((h-p)/h2);
        }
        result = (pi * p * ( pow(r, 2.0) + r*r2 + pow(r2, 2.0) ))/3.0;
        results[i] = result;
    }
    for(i=0; i<T; i++)
    {
        printf("Case %d: %lf\n", i+1, results[i]);
    }
    return 0;
}
