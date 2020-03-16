#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int length, i;

    printf("Enter any string: ");
    gets(str);

    length = strlen(str);

    printf("After Processing: ");
    for(i=0;i<length;i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("%c", str[i] + 32);
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            printf("%c", str[i] - 32);
        }else{
            //do nothing if not alphabet
            printf("%c", str[i]);
        }
    }

    return 0;
}
