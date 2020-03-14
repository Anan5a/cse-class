#include <stdio.h>

int factorial(int,int);

int main()
{
    int val1, fact = 0;

    printf("Enter a number: ");
    scanf("%d", &val1);


    fact = factorial(val1,1);
    printf("Factorial of %d = %d\n", val1, fact);

}


int factorial(int val1, int last)
{
    if(val1 == 1)
        return last;
    return factorial(val1-1, val1*last);
}
