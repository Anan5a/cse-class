#include <stdio.h>

int main()
{
    int i,j,elements;

    printf("Enter the total number of elements: ");
    scanf("%d", &elements);

    int myArray[elements];

    printf("Enter the elements: ");

    for(i=0;i<elements;i++){
        scanf("%d", &myArray[i]);
    }

    for(i=0; i<elements;i++){
        for(j=0;j<elements-i;j++){
            if(myArray[j] > myArray[j+1]){
                //swap
                int t = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = t;
            }
        }
    }

    printf("Sorting in ascending order: ");

    for(i=0;i<elements;i++){
        printf("%d ", myArray[i]);
    }

    return 0;
}
