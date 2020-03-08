#include <stdio.h>

int main()
{
    int i, input,big, count=0;

    scanf("%d", &input);

    int in[input];

    for(i=0;i<input;i++){
        scanf("%d", &in[i]);
    }
    big = 0;
    for(i=0;i<input;i++){
        if(in[i] == big){
            big = in[i];
            count++;
        }else if(in[i] > big){
            count = 1;
            big = in[i];
        }
    }

    printf("%d", count);
}
