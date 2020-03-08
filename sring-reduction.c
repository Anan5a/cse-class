#include <stdio.h>
#include <string.h>

int main()
{
    char time[11], military[11];
    int i, len = 0,tmp;
    gets(time);
    len = strlen(time);

    /*
    explanation

    First set NULL to len-2 to cut PM str
    then convert the hour to integer and add 12
    print the integer and &time[2]
    &time[2] means the address of 3rd element of the array. & is required because we are supplying a partial array
    return to prevent further execution
    */
    if(time[len-2] == 'P' || time[len-2] == 'p'){
        time[len-2] = NULL;
        tmp = ((time[0] - '0')*10 + time[1] - '0');
        if(tmp == 12){
            tmp = 0;
        }
        printf("%d%s", tmp+12, &time[2]);
        return 0;
    }

    if(time[len-2] == 'a' || time[len-2] == 'A'){
        time[len-2] = NULL;
        tmp = ((time[0] - '0')*10 + time[1] - '0');
        if(tmp == 12){
            char ctmp[3] = {'0','0','\0'};
            printf("%s%s", ctmp, &time[2]);
            return 0;
        }
        printf("%s", time);
        return 0;
    }

    return 0;
}
