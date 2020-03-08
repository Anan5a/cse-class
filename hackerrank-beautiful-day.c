#include <stdio.h>
#include <string.h>
#include <math.h>

int reverse(char*);
int main()
{
    long int i, div;
    char start[7], end[7], tmp[7];

    scanf("%s %s %ld", &start, &end, &div);
    start[6] = NULL;
    end[6] = NULL;
    printf("%s %s %ld", start, end, div);
    reverse(&start);
}

int reverse(char *str)
{
    int i,rev=0, len = strlen(str),sum=0;

    char tmp[len+1];
    for(i=len-1;i>=0;i--){
        sum += (str[i] - '0')*pow(10.00, (double) i);
        printf("\n%d i=%d c=%d, p=%d", sum,i,(str[i] - '0'),pow(10.0, (double) i));
    }

}
