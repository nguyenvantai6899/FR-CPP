#include <stdio.h>
#include <stdlib.h>
void inputArrayExtent(int **p, int *n, int *maxSize)
{
    while (true)
    {
        char input[5];
        int x;
        printf("Enter the number greater than 0 and less than 10 and enter '@' to end\n");
        printf("Enter number: ");
        scanf("%s", &input);
        if (input[0] == '@')
        {
            break;
        }
        x = atoi(input);

        if (x >= 10 || x < 0)
        {
            printf("ERROR, Enter again \n");
            continue;
        }
        if (*n == *maxSize)
        {
            *maxSize *= 2;
            int *q = (int *)malloc(*maxSize * sizeof(int));
            for (int i = 0; i < *n; i++)
            {
                q[i] = (*p)[i];
            }
            free(*p);
            *p = q;
        }
        (*p)[*n] = x;
        (*n)++;
    }
}
int main()
{
    int n = 0, maxSize = 2;
    int *p = (int *)malloc(2 * sizeof(int));
    inputArrayExtent(&p, &n, &maxSize);

    for (int i = 0; i < maxSize; i++)
    {
        printf("%d \t", p[i]);
    }

    free(p);
}