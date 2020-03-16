#include <stdio.h>

int is_prime(int);

int main()
{
    int i, start, end, isprime;

    printf("Enter the range: ");
    scanf("%d %d", &start, &end);

    printf("The prime number between %d and %d are: ", start, end);

    //to prevent 1
    if(start == 1)
        start++;

    for(i=start;i<=end;i++){
        isprime = is_prime(i);
        if(isprime == 0)
            printf("%d ", i);
    }

    return 0;
}

int is_prime(int number)
{
    int j;
    for(j=2;j<=number/2;j++){
        if(number%j != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
