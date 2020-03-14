#include <stdio.h>

void fib(int, int,int,int);

int main()
{
    int max;

    printf("How many Fibonacci number: ");
    scanf("%d", &max);

    fib(max, 1, 0, 0);

}
4 1 0 0
4 2 0 1
4 3 1 1
4 4 1 2

void fib(int max, int last, int mlast, int mlast2)
{
    if(last > max)
        return;

    printf("%d ", mlast+mlast2);
    printf("mlast=%d mlast2=%d\n", mlast, mlast2);
    if(mlast+mlast2 >1 )
        mlast2++;
    fib(max, last+1, mlast+mlast2, mlast);

}
