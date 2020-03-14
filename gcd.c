#include <stdio.h>

int gcd(int, int);

int main()
{
    int val1, val2;
    val1 = gcd(10,18);
    printf("gcd = %d", val1);

}


int gcd(int a, int b)
{
    if(a == b)
        return a;
    if(a > b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
    return gcd(a, b);

}
