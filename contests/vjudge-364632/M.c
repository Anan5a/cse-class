#include <stdio.h>

int main()
{
    int T,i;

    scanf("%d", &T);
    char relations[T];

    for(i=0;i<T;i++){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        if(n1 > n2){
            relations[i] = '>';
            continue;
        }
        if(n1 < n2){
            relations[i] = '<';
            continue;
        }
        if(n1 == n2){
            relations[i] = '=';
            continue;
        }
    }
    for(i=0;i<T;i++){
        printf("%c\n", relations[i]);
    }
    return 0;
}
