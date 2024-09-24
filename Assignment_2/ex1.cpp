#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter total number of arrays: ");
    scanf("%d", &n);
    printf("%d", n);
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Allocating memory failed");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter number element %d: ", i + 1);
            scanf("%d", arr + i);
        }
        for (int i = 0; i < n; i++)
        {
            printf("Element %d: %d\n", i + 1, *(arr + i));
        }
        free(arr);
    }
    return 0;
}