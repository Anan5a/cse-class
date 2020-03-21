#include <stdio.h>

int main()
{
    int i, elements, smallest, largest, IndexLargest = 0, IndexSmallest = 0;

    printf("Enter the total number of elements: ");
    scanf("%d", &elements);

    int myArray[elements];

    printf("Enter the elements: ");

    for(i=0;i<elements;i++){
        scanf("%d", &myArray[i]);
    }

    largest = myArray[0];
    smallest = myArray[0];

    for(i=0;i<elements;i++){
        if(myArray[i] > largest){
            largest = myArray[i];
            IndexLargest = i;
        }
        if(myArray[i] < smallest){
            smallest = myArray[i];
            IndexSmallest = i;
        }
    }

    printf("Largest Number is %d found at index %d\n", largest, IndexLargest);
    printf("Smallest Number is %d found at index %d\n", smallest, IndexSmallest);

    return 0;
}
