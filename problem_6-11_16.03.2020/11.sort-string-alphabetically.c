#include <stdio.h>
#include <string.h>

int main()
{
    int i, num_str = 10;
    char str[num_str][100];

    printf("Enter 10 strings: \n\n");
    for(i=0;i<num_str;i++){
        gets(str[i]);
    }
    sort(str, num_str);

    printf("Alphabetically sorted: \n\n");
    for(i=0;i<num_str;i++){
        puts(str[i]);
    }

}


void sort(char *str, int elements)
{
    int i,j;
    for(i=0;i<elements-1;i++){
        for(j=0;j<elements-1-i;j++){
            if(stricmp((str+(j*100)), (str+((j+1)*100))) > 0){
                char tmp_str[100];

                strcpy(tmp_str, (str+(j*100)));
                strcpy((str+(j*100)), (str+((j+1)*100)));
                strcpy((str+(j+1)*100), tmp_str);
            }
        }
    }
}

