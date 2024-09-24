#include <stdio.h>
#include <stdlib.h>
bool isOdd(int n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    return true;
}

void mergeArrays(int inp_arr_1[], int inp_arr_2[], int m, int n)
{
    int inp_arr_odd[2020];
    int inp_arr_even[2020];
    int inp_arr_result[4042];
    int odd_idx = 0, even_idx = 0;
    for (int j = 0; j < m; j++)
    {
        if (isOdd(inp_arr_1[j]))
        {
            inp_arr_odd[odd_idx++] = inp_arr_1[j];
        }
        else
        {
            inp_arr_even[even_idx++] = inp_arr_1[j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (isOdd(inp_arr_2[k]))
        {
            inp_arr_odd[odd_idx++] = inp_arr_2[k];
        }
        else
        {
            inp_arr_even[even_idx++] = inp_arr_2[k];
        }
    }
    int merge_count = 0, odd_count = 0, even_count = 0;
    while (odd_idx > odd_count && even_idx > even_count)
    {
        inp_arr_result[merge_count++] = inp_arr_odd[odd_count++];
        inp_arr_result[merge_count++] = inp_arr_even[even_count++];
    }
    while (odd_idx > even_idx && odd_idx > odd_count)
    {
        inp_arr_result[merge_count++] = inp_arr_odd[odd_count++];
    }
    while (even_idx > odd_idx && even_idx > even_count)
    {
        inp_arr_result[merge_count++] = inp_arr_even[even_count++];
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", inp_arr_result[i]);
    }
}

int main()
{
    // int m, n;
    // int *inp_arr_2 = (int *)malloc(n * sizeof(int));
    // int *inp_arr_1 = (int *)malloc(m * sizeof(int));
    // printf("Enter the number of arrays 1: ");
    // scanf("%d", &m);
    // for (int i = 0; i < m; i++)
    // {
    //     scanf("%d", &inp_arr_1[i]);
    // }
    // printf("Enter the number of arrays 2: ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &inp_arr_2[i]);
    // }
    // mergeArrays(inp_arr_1, inp_arr_2, m, n);
    int arr1[] = {2, 4, 6, 7, 9};
    int arr2[] = {1, 3, 9, 13, 11, 21};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeArrays(arr1, arr2, n1, n2);
    return 0;
}