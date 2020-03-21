#include <stdio.h>

void swap_by_reference(int*, int*);

int main()
{
    int val1, val2;

    printf("Enter two numbers: ");
    scanf("%d %d", &val1, &val2);


    printf("Before swap val1=%d val2=%d\n", val1, val2);
    swap_by_reference(&val1, &val2);
    printf("Swapped val1=%d val2=%d\n", val1, val2);

}


void swap_by_reference(int *val1, int *val2)
{
    int tmp;
    tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}
