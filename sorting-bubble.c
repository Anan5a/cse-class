#include <stdio.h>

int main()
{
    int num[5] = {3,15,-44345,464,4}, i,j;

    for(i=0; i<4;i++){
        for(j=0;j<4-i;j++){
            if(num[j] > num[j+1]){
                //swap
                int t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
            }
            printf("i=%dj=%d\n",i,j);
        }
    }

    for(i=0;i<5;i++){
        printf("%d\n", num[i]);
    }
}
