#include <stdio.h>
#include <string.h>

int check_bug(int*, char*);

int main()
{
    int games, i;

    scanf("%d", &games);
    int happy_unhappy[games];
    int game_c[games];
    char game_bug[games][100];

    for ( i = 0; i < games; i++)
    {
        fflush(stdin);
        scanf("%d", &game_c[i]);
        fflush(stdin);
        scanf("%s", &game_bug[i]);
    }
    for ( i = 0; i < games; i++)
    {
        int tmp = check_bug(&game_c[i], game_bug[i]);
        if(tmp == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
    
}

int check_bug(int *cells, char *bugs)
{
    int k ;
    k = *cells;
    int  bc[k], i, j, uc=0, emp = 0, seqerr = 0, l;
    char uniq[k];

    if(k == 1){
        if(*bugs == '_')
            return 1;
        else
            return 0;
    }

    for ( i = 0; i < k; i++)
    {
        uniq[i] = '\0';
    }
    
    for(i = 0;i<k;i++){
        for (j=0 ; j < k; j++)
        {
            if(*(bugs+i) == uniq[j]){
                bc[j]++;
                if(*(bugs+i) == '_'){
                    emp++;
                }
                if(*(bugs+i) != *(bugs+i-1)){
                    seqerr = 1;
                }
                break;
            }
            if(uniq[j] == '\0'){
                if(*(bugs+i) == '_'){
                    emp++;
                }
                
                bc[j] = 1;
                uniq[j] = *(bugs+i);
                uc++;  
                break;
            }
        }
        
    }
    for(i=0;i<uc;i++){
        if(emp == 0){
            if(uc != 1 && seqerr == 1)
                return 0;
        }
        if(bc[i] == 1){
            if(uniq[i] != '_')
                return 0;
        }
    }
    return 1;
}