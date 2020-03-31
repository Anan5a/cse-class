#include <stdio.h>
#include <string.h>

int main()
{
    int T, n, m,i,j,k;

    scanf("%d", &T);

    for(i=0; i<T; i++)
    {
        scanf("%d %d", &n, &m);

        int arr[n];

        for(j=0; j<n; j++)
        {
            scanf("%d ", &arr[j]);
        }
        for(j=0; j<m; j++)
        {
            char c[5];
            scanf("%s", &c);
            if(c[0] == 'S')
            {
                int s;
                scanf("%d", &s);
                fflush(stdin);

                for(k=0; k<n; k++)
                {
                    arr[k]+= s;
                }
                continue;
            }
            if(c[0] == 'M')
            {
                int s;
                scanf("%d", &s);
                fflush(stdin);

                for(k=0; k<n; k++)
                {
                    arr[k] *= s;
                }
                continue;
            }
            if(c[0] == 'D')
            {
                int s;
                scanf("%d", &s);
                fflush(stdin);

                for(k=0; k<n; k++)
                {
                    arr[k] /= s;
                }
                continue;
            }
            if(c[0] == 'R')
            {
                fflush(stdin);
                int tmp[n];
                for(k=n-1; k >= 0; k--)
                {
                    tmp[k]= arr[n-(k+1)];
                }
                for(k=0; k<n; k++)
                {
                    arr[k]= tmp[k];
                }
                continue;
            }
           if(c[0] == 'P')
        {
                int tmp_, a, b;
                scanf("%d %d", &a, &b);
                fflush(stdin);

                tmp_ = arr[a];
                arr[a] = arr[b];
                arr[b] = tmp_;
                continue;
            }
        }
        printf("Case %d:\n", i+1);

        for(k=0; k < n-1; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("%d\n", arr[k]);

        fflush(stdin);
    }
}
