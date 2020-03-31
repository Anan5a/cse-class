#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int  T, i, j, acc = 0;

    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        acc = 0;/* reset */
        int op;
        scanf("%d", &op);
        fflush(stdin);
        printf("Case %d:\n", i+1);

        for(j=0; j<op; j++)
        {
            char op_str[13];
            scanf("%s", &op_str);
            if(op_str[0] == 'd')
            {
                int t = 0;
                scanf("%d", &t);
                acc += t;
                fflush(stdin);
            }
            if(op_str[0] == 'r')
            {
                printf("%d\n", acc);
                fflush(stdin);
            }
        }

    }
}
