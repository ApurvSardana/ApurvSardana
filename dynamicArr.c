#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    

    printf("Enter initial size of array: \n");
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    int counter = 0;

    printf("Enter elements into array: \n");

    while(counter < size)
    {
    scanf("%d", &arr[counter]);
    counter++;
    }

    // for(; counter < size; counter++)
    // {
    //     scanf("%d", &)
    // }
    
    int *ptr = realloc(arr, size + 1);
    arr[size] = 24;

    for(int i = 0; i < size + 1; i++)
    printf("%d ", arr[i]);

    free(arr);

    return 0;
}