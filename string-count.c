#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,len,o[100],found=0,nbnf=0;
    char c[100],d[100],t;
    for(i=0; i<100; i++)
    {
        o[i]=0;
        d[i]=NULL;
    }
    gets(c);
    len=strlen(c);
    for(i=0; i<len; i++)
    {
        t=c[i];
        for(j=0; j<100; j++)
        {
            if(d[j]==t)
            {
                found=1;
                o[j]++;
                break;
            }
        }
        if(found==0)
        {
            for(j=0; j<100; j++)
            {
                if(d[j]==NULL)
                {
                    o[j]++;
                    d[j]=t;
                    nbnf++;
                    break;
                }
            }
        }
        found=0;
    }

    for(i=0; i<nbnf; i++)
        printf("%c=%d\n",d[i],o[i]);
    return 0;
}
