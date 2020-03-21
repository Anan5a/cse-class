#include <stdio.h>

int main()
{
    int a = 10, b = 25;


    printf("Before a=%d b=%d\n", a,b);
    b = b-a;
    a = a+b;
    b = a-b;
    printf("After swap a=%d b=%d", a,b);

}

