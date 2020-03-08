#include <stdio.h>

int main()
{
    int i,valley,up=0,down=0;//prev = 0 => valley

    scanf("%d", &valley);
    char ud[valley+1],prev = NULL;

    fflush(stdin);
    for(i=0;i<valley;i++){
        scanf("%c", &ud[i]);
    }

    for(i=0;i<valley;i++){
        if(ud[i] == 'U'){
            if(prev == 'U'){
                up++;
            }else{
                up = 0;
            }
            prev = 'U';
        }
        if(ud[i] == 'D'){
           if(prev == 'D'){
                down++;
            }else{
                down = 0;
            }
            prev = 'D';
        }
    }
    printf("%d", up);
    return 0;

}
