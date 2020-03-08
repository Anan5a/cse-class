#include <stdio.h>

int main()
{
    int games,i,high=0,low=0,nbhigh=0,nblow=0;

    scanf("%d", &games);
    int score[games];

    for(i=0;i<games;i++){
        scanf("%d", &score[i]);
    }
    high = score[0];
    low = high;
    for(i=0;i<games;i++){
        if(score[i] > high){
            nbhigh++;
            high = score[i];
        }
        if(score[i] < low){
            nblow++;
            low = score[i];
        }
    }

    printf("%d\n%d", nbhigh, nblow);
    return 0;

}
