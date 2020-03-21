#include <stdio.h>

int add_by_value(int, int);
void add_by_reference(int*, int*, int*);

int main()
{
    int val1, val2;
    int sum = 0, sum_ref = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &val1, &val2);

    sum = add_by_value(val1, val2);

    printf("Add using call by value %d+%d = %d\n", val1, val2, sum);
    add_by_reference(&val1, &val2, &sum_ref);
    printf("Add using call by reference %d+%d = %d\n", val1, val2, sum_ref);

}

int add_by_value(int val1, int val2)
{
    return val1+val2;
}

void add_by_reference(int *val1, int *val2, int *result)
{
    *result = *val1 + *val2;
}
