#include <stdio.h>

int main()
{
    int i, j, n, unique_el=0, found = 0;

    scanf("%d", &n);
    int sighting[n], sightcount[n], sights[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &sighting[i]);
        sightcount[i] = 0;
        sights[i] = 0;
    }

    //Finding sighting count and unique birds
    for(i=0; i<n; i++)
    {
        int tmp = sighting[i];
        for(j=0; j<n; j++)
        {
            if(sights[j] == tmp)
            {
                found = 1;
                sightcount[j]++;
                break;
            }
        }
        if(found == 0)
        {
            for(j=0; j<n; j++)
            {
                if(sights[j] == 0)
                {
                    sightcount[j]++;
                    sights[j] =sighting[i];
                    unique_el++;
                    break;
                }
            }
        }
        found = 0;
    }

    //sorting
    for(i=0; i<unique_el-1;i++){
        for(j=0;j<unique_el-1-i;j++){
            if(sightcount[j] > sightcount[j+1]){
                //swap
                int t = sightcount[j];
                sightcount[j] = sightcount[j+1];
                sightcount[j+1] = t;
                t = sights[j];
                sights[j] = sights[j+1];
                sights[j+1] = t;

            }
        }
    }

    if(sightcount[unique_el - 1] == sightcount[unique_el - 2]){
        if(sights[unique_el - 1] > sights[unique_el - 2]){
            printf("%d", sights[unique_el - 2]);
            return 0;
        }else{
            printf("%d", sights[unique_el - 1]);
            return 0;
        }
    }else{
        printf("%d", sights[unique_el - 1]);
    }
    return 0;
}
