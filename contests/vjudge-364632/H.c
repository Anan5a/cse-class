#include <stdio.h>
#include <math.h>

#define pi acos(-1.0)

int main()
{
    int T, i;
    scanf("%d", &T);
    double results[T];

    for(i=0;i<T;i++){
        double angle, Ox, Oy, Ax, Ay, Bx, By, OA, AB, result;
        scanf("%lf %lf %lf %lf %lf %lf", &Ox, &Oy, &Ax, &Ay, &Bx, &By);

        OA = sqrt( pow((Ax-Ox), 2.0) + pow((Ay-Oy), 2.0) );
        AB = sqrt( pow((Ax-Bx), 2.0) + pow((Ay-By), 2.0) );

        angle = 2 * (180/pi)*asin( (AB / (2*OA) ) );/* Into degree */
        result = 2 * OA * ( (angle*pi)/360 );
        results[i] = result;
    }

    for(i=0;i<T;i++){
        printf("Case %d: %lf\n", i+1, results[i]);
    }
}
