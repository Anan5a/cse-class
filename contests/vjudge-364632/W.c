#include <stdio.h>

int main()
{
	int i,T;

	scanf("%d", &T);
	int day[T][2], month[T][2], year[T][2];

	for(i=0;i<T;i++){
		scanf("\n%d/%d/%d\n%d/%d/%d", &day[i][0], &month[i][0], &year[i][0], &day[i][1], &month[i][1], &year[i][1]);
	}
	for(i=0;i<T;i++){
		int tmp_dif =  (day[i][0] + month[i][0] * 100 + year[i][0] * 10000) - (day[i][1] + month[i][1] * 100 + year[i][1] * 10000);

		if(tmp_dif < 0){
			printf("Case #%d: Invalid birth date\n", i+1);
			continue;
		}
		if(tmp_dif/10000 <= 130){
			printf("Case #%d: %d\n", i+1, tmp_dif/10000);
			continue;
		}
		if(tmp_dif/10000 > 130){
			printf("Case #%d: Check birth date\n", i+1);
			continue;
		}
	}
	return 0;
}

