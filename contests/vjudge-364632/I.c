#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned long long int *line2arg(char*);

int main()
{
    unsigned long long int  T, i, j, k, last_report_index = 0, current_report_index = 0;

    scanf("%llu", &T);
    unsigned long long int results[T][100], report[T][100], *r;

    /* 0 fill array */
    for(i=0; i<T; i++)
    {
        for(j=0; j<100; j++)
        {
            results[i][j] = 0;
            report[i][j] = 0;
        }
    }
    /* end */

    for(i=0; i<T; i++)
    {
        unsigned long long int in;
        scanf("%llu", &in);

        while(getchar() != '\n');

        for(j=0; j<in; j++)
        {

            report[i][j] = 0;/* default 0 */
            char tmp2[25];

            fgets(tmp2, sizeof(tmp2), stdin);
            r = line2arg(tmp2);
            if(*r == 1)
            {
                /* donate */
                results[i][j] = *(r+1);
                continue;
            }
            if(*r == 2)
            {
                /* donate */
                results[i][j] = 2;
                report[i][0]++;
            }
        }

    }

    for(i=0; i<T; i++)
    {
        unsigned long long int mt = 0;
        printf("Case %llu:\n", i+1);
        unsigned long long int lsum = 0;

block_next:
        for(j=0; j<100; j++)
        {
            if(results[i][j] == 2)
            {
                if(last_report_index == 0 && mt == 0 && j == 0)
                {
                    mt++;
                    break;
                }
                if(last_report_index < j)
                {
                    current_report_index = j;
                    break;
                }
            }
        }
        /* report */
        for(k=last_report_index; k<current_report_index; k++)
        {
            if(results[i][k] == 2)
            {
                continue;
            }
            lsum += results[i][k];
        }

        if(report[i][0] > 0)
        {
            last_report_index=current_report_index;
            current_report_index = 0;
            report[i][0]--;

            printf("%llu\n", lsum);

            goto block_next;
        }
        last_report_index=current_report_index;
        current_report_index = 0;

    }
}


unsigned long long int *line2arg(char *line)
{
    unsigned long long int wc=0, op_ = 0, i=0, j = 0, len = strlen(line);
    static unsigned long long int retval[2];
    unsigned long long int tmp_sum = 0;

    retval[0] = 0;
    retval[1] = 0;

    char words[10][100];


    for(i=0; i<len; i++)
    {
        if(*(line+i) == '\n' || *(line+i) == '\0' || i == len-1)
        {
            words[wc][j] = '\0';
            wc++;
            j=0;
            break;
        }
        if(*(line+i) == ' ')
        {
            words[wc][j] = '\0';
            wc++;
            j=0;
        }
        else
        {
            words[wc][j] = *(line+i);
            j++;
        }
    }
    for(i=0; i<wc; i++)
    {
        if(strcmp(words[i], "donate") == 0)
        {
            op_ = 1;
            continue;
        }
        else if(strcmp(words[i], "report") == 0)
        {
            op_ = 2;
            continue;
        }
        /* convert char to number */
        len = strlen(words[i]);
        for(j=0; j<len; j++)
        {
            unsigned long long int num = words[i][j] - '0';
            tmp_sum = tmp_sum*10 + num;
        }
    }

    retval[0] = op_;
    retval[1] = tmp_sum;
    return retval;
}
