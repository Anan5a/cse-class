#include <stdio.h>

int main()
{
    int n,i,j,bday,bmonth,sum=0,ways=0;

    scanf("%d", &n);
    int seg[n];
    for(i=0;i<n;i++){
        scanf("%d", &seg[i]);
    }
    scanf("%d %d", &bday, &bmonth);

    for(i=0;i<n;i++){
        for(j=0;j<bmonth;j++){
            if(i+j > n-1){
                sum = 0;
                break;
            }
            sum += seg[i+j];
        }
        if(sum == bday){
            ways++;
        }
        sum = 0;
    }

    printf("%d", ways);
    return 0;

}
