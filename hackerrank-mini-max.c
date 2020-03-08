#include <stdio.h>

int main()
{
    long long int input[5],i,j;

    long long int sum_max=0, sum_min=0;

    scanf("%lld %lld %lld %lld %lld", &input[0], &input[1], &input[2], &input[3], &input[4]);

    //sort the array
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(input[j] > input[j+1]){
                int t = input[j];
                input[j] = input[j+1];
                input[j+1] = t;
            }
        }
    }

    //sum
    for(i=0;i<4;i++){
        sum_max += input[i+1];
        sum_min += input[i];
    }
    printf("%lld %lld", sum_min, sum_max);
}
