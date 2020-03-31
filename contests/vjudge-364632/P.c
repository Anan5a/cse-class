#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, a, b, c, d;

    scanf("%d", &T);

    for(i=0; i<T; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a == b && b == c && c == d){
            printf("square\n");
            continue;
        }
        if((a == c && b == d) || (a == b && c == d) || (a == d && b == c)){
            printf("rectangle\n");
            continue;
        }
        if((a+b+c >= d) && (b+c+d >= a) && (c+d+a >= b) && (b+d+a >= c)){
            printf("quadrangle\n");
            continue;
        }
        printf("banana\n");

    }
}
