#include <stdio.h>

void run();

int main()
{
    run();
    return 0;
}

void run()
{
    int in;

    scanf("%d", &in);
    /*
    even and >= 4 always possible
    */
    if(in%2 == 0 && in >= 4)
    {
        printf("YES\n");
        return;
    }
    /*
    odd not possible
    */
    printf("NO\n");
}
