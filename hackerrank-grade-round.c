#include <stdio.h>

int main()
{
    int i,divisor=0,in,min=38,num,nb=5;

    scanf("%d", &in);
    int result[in];

    for(i=0;i<in;i++){
        scanf("%d", &num);

        divisor = num/nb;
        if(num<min || (((divisor+1)*5) - num) >= 3){
            result[i] = num;
        }
        else if(num<100){
            result[i] = (divisor+1)*5;
        }else{
            result[i] = 100;
        }
    }

    for(i=0;i<in;i++){
        printf("%d\n", result[i]);
    }
}
