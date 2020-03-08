#include <stdio.h>

int is_leap(int);
int main()
{
    int year,leap = 0, days[12] = {31,28,31,30,31,30,31,31,30,31,30,31},sum=0,i,j,prev_date=0,date=0,month=0;

    scanf("%d", &year);
    leap = is_leap(year);
    if(leap == 0){
        days[1] += 1;
    }

    for(i=0;i<12;i++){
        for(j=1;j<=days[i];j++){
            if(sum == 256){
                date = prev_date;
                break;
            }
            sum++;
            date++;
            month = i+1;
            prev_date = date;
        }
        date = 0;
    }
    if(year == 1918)
        prev_date += 13;

    printf("%2d.%02d.%d", prev_date, month, year);
    return 0;

}

int is_leap(int year)
{
    if(year < 1918)
        return year%4;
    if(year%400 == 0)
        return 0;
    if(year%4 == 0 && year%100 != 0)
        return 0;
    return 1;
}
