#include <stdio.h>
#include <string.h>

void break_into_words(char *, char *, int*, int*);

int main()
{
    int i,total_match=0,k,match[100],wci[100], index[100];

    char str[1000], word[100], result[100][100], wc = 0;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the word: ");
    gets(word);
    break_into_words(str, result, &wc, wci);
    //Now result contains wc amount of words

    for(i=0;i<=wc;i++){
        if(strcmp(word, result[i]) == 0){
            match[total_match] = i;
            total_match++;
        }
    }
    //Count match indexes
    for(i=0;i<total_match;i++){
        index[i] = 0;
        for(k=0;k<match[i];k++){
            index[i] += wci[k];
        }
    }

    printf("Occurrence: %d\nLocation: ", total_match);
    for(i=0;i<total_match;i++){
        if(i == total_match-1)
            printf(" %d", index[i]);
        else
            printf(" %d,", index[i]);
    }

}

void break_into_words(char *str, char *result, int *wc, int *wci)
{
    int length = strlen(str), i, j, k;

    i = 0;
    k = *wc;
    for(j=0;j<length;j++){
        if(*(str+j) == ' ' || *(str+j) == '\0'){
            *(result+i+k*100) = '\0';
            *(wci+k) = i+1;
            i=0;
            k++;
        }
        else
        {
            *(result+i+k*100) = *(str+j);
            i++;
        }
    }
    *wc = k;
}
