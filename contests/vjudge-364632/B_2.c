#include <stdio.h>

int main()
{
    int T, i, j, k, ae = 0, aet = 0, problems;

    scanf("%d", &T);

    for(i=0; i< T; i++)
    {
        scanf("%d", &problems);
        if(problems > 10)
        {
            printf("%d %d\n", (problems - 10), 10);
            continue;
        }
        printf("0 %d\n", problems);
    }
    return 0;
}
