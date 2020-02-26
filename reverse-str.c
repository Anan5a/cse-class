#include <stdio.h>
#include <string.h>

int main()
{
    int i,len, j=0;
    char c[100], d[100];

    gets(c);
    len = strlen(c);

    for(i=len-1;i>=0;i--){
            d[j] = c[i];
            j++;
    }
    //put a null to prevent gurbage
    d[j] = NULL;
    printf("%s", d);
}
