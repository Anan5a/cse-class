#include <stdio.h>
#include <string.h>

int main()
{
    int inputs, i, len,k,j,m,eq=0;

    char nstr[101],str[101], a = 'a', b = 'b', c = 'c';

    scanf("%d", &inputs);
    fflush(stdin);
    for(m = 0;m<inputs;m++){
        //take input
        str[0] = '\0';//make sure no garbage is read
        gets(str);
        len = strlen(str);

        for(i=0;i<len;i++){
            for(j=0;j<len-(i+1);j++){
                if(str[j] == str[j+1]){
                    eq++;
                    nstr[i] = str[j];
                }
                     printf("%c %c  nstr = %c\n", str[j], str[j+1],nstr[j]);

            }
            printf("rr\n");
        }
    }
}
