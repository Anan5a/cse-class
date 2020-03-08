#include <stdio.h>

int main()
{
    int s,t,a,b,m,n,fa=0,fb=0,i;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    int vm[m], vn[n];

    for(i=0;i<m;i++){
        scanf("%d", &vm[i]);
        if( (a+vm[i]) >= s && (a+vm[i]) <= t){
            fa++;
        }
    }

    for(i=0;i<n;i++){
        scanf("%d", &vn[i]);
        if( (b+vn[i]) >= s && (b+vn[i]) <= t){
            fb++;
        }
    }

    printf("%d\n%d", fa, fb);
    return 0;

}
