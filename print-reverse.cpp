#include <stdio.h>
#include <string.h>

int main()
{
    int i,len;
    char c[100];

    gets(c);
    len = strlen(c);

    for(i=len-1;i>=0;i--){
        printf("%c", c[i]);
    }
}
