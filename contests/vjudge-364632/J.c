#include <stdio.h>
#include <math.h>

int main()
{
    int  T, i, j;

    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        double r1 = 0, r2 = 0, r3 = 0, len_1 = 0, len_2 = 0, len_3 = 0, theta_1 = 0, theta_2 = 0, theta_3 = 0, s = 0, s_1 = 0, s_2 = 0, s_3 = 0, area_tr = 0, area_arc_1 = 0, area_arc_2 = 0, area_arc_3 = 0;
        scanf("%lf %lf %lf", &r1, &r2, &r3);

        len_1 = r1+r2;
        len_2 = r2+r3;
        len_3 = r1+r3;

        /* Area of triangle */
        s = (len_1+len_2+len_3)/2.0;
        s_1 = (s-len_1), s_2 = (s-len_2), s_3 = (s-len_3);
        area_tr = sqrt(s * s_1 * s_2 * s_3);

        theta_1 = acos(((len_2*len_2 + len_3*len_3) - len_1*len_1)/(2.0*len_2*len_3));
        theta_2 = acos(((len_1*len_1 + len_3*len_3) - len_2*len_2)/(2.0*len_1*len_3));
        theta_3 = acos(((len_1*len_1 + len_2*len_2) - len_3*len_3)/(2.0*len_1*len_2));

        area_arc_1 = (r1*r1 * theta_1 )/2.0;
        area_arc_2 = (r2*r2 * theta_2 )/2.0;
        area_arc_3 = (r3*r3 * theta_3 )/2.0;
        printf("Case %d: %.10lf\n", i+1, (area_tr - (area_arc_1+area_arc_2+area_arc_3))+(1e-10));
    }
}

