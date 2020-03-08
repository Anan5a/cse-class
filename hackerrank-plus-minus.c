#include <stdio.h>

int main()
{
    int input_length;

    scanf("%d", &input_length);

    int i, input[input_length];
    float positive=0,negative=0,zero=0;
    //Not necessary
    for(i=0;i<input_length;i++){
        scanf("%d", &input[i]);
    }
    //end
    for(i=0;i<input_length;i++){
            if(input[i] > 0)
                positive++;
            if(input[i] < 0)
                negative++;
            if(input[i] == 0)
                zero++;
    }

    printf("%.6f\n%.6f\n%.6f", (positive/input_length), (negative/input_length), (zero/input_length));
}
