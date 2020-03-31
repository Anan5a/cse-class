#include <stdio.h>

float cel2f(float);
float f2cel(float);

int main()
{
    int T,i;
    scanf("%d", &T);
    float temp[T][2];

    for(i=0; i<T; i++)
    {
        scanf("%f %f", &temp[i][0], &temp[i][1]);
    }

    for(i=0; i<T; i++)
    {
        printf("Case %d: %.2f\n", i+1, f2cel(cel2f(temp[i][0]) + temp[i][1]));
    }
    return 0;
}

float cel2f(float cel)
{
    return (9.0/5.0)*cel+32.0;
}
float f2cel(float f)
{
    return (5.0*(f-32.0))/9.0;
}
