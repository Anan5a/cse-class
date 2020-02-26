#include <stdio.h>
#include <string.h>

int main()
{
    int i,len, v=0, o[100];
    char c[100], d[100] t;

    for(i=0;i<100;i++){
        o[i] = 0;
        d[i] = NULL;
    }
    gets(c);
    len = strlen(c);

    for(i=0;i<len;i++){
        t = c[i];
        for(j=0;j<100;j++){
            if(d[j] == t){
                //found t in d
                o[j]++;
                break;
            }
        }
    }
    printf("Vowels in the string: %d", v);
}
