#include <stdio.h>
#include <string.h>

int main()
{
    int i,len, v=0;
    char c[100], t;

    gets(c);
    len = strlen(c);

    for(i=len-1;i>=0;i--){
            t = c[i];
            if(t == 'A' || t == 'a' || t == 'E' || t == 'e' || t == 'I' || t == 'i' || t == 'O' || t == 'o' || t == 'U' || t == 'u'){
                v++;
            }
    }
    printf("Vowels in the string: %d", v);
}
