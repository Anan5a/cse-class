#include <stdio.h>

int main()
{
    int  T, i, j;

    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        int p, q, eggs, gm = 0, nb = 0;
        scanf("%d %d %d", &eggs, &p, &q);
        int eggs_w[eggs];

        for(j=0; j<eggs; j++)
        {
            scanf("%d", &eggs_w[j]);
        }
        j = 0;
        while(1)
        {
            gm += eggs_w[j];
            nb++;

            if(gm == q)
            {
                printf("Case %d: %d\n", i+1, nb);
                nb = 0;
                gm = 0;
                j = 0;
                break;
            }

            if(nb == p)
            {
                printf("Case %d: %d\n", i+1, nb);
                nb = 0;
                gm = 0;
                j = 0;
                break;
            }
            if(gm > q)
            {
                printf("Case %d: %d\n", i+1, nb-1);
                nb = 0;
                gm = 0;
                j = 0;
                break;
            }

            if(nb > p)
            {
                printf("Case %d: %d\n", i+1, nb-1);
                nb = 0;
                gm = 0;
                j = 0;
                break;

            }
            j++;
        }
    }


}
