#include <stdio.h>

int main()
{
    float cand, voter, i;
    scanf("%f %f", &cand, &voter);
    float votes[(int) cand+1];
    for(i=0.0;i<=cand;i++){
        votes[(int) i] = 0.0;
    }
    for(i=1.0;i<=voter;i++){
        float tmp = 0.0;
        scanf("%f", &tmp);
        votes[(int) tmp]++;
    }
    for(i=1.0;i<=cand;i++){
        printf("%.2f%%\n", (votes[(int) i]/voter)*100);
    }
    return 0;
}
