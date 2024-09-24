#include <stdio.h>
#include <ctype.h>
#include <string.h>

int inValidStr(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isdigit(str[i]))
        {
            return 0;
        }
    }
    return 1;
}
int compareStr(char str1[], char str2[])
{
    int len_1 = strlen(str1);
    int len_2 = strlen(str2);
    if (len_1 > len_2)
        return 1;
    if (len_1 < len_2)
        return -1;
    if (len_1 == len_2)
    {
        for (int i = 0; i < len_1; i++)
        {
            if (str1[i] > str2[i])
                return 1;
            if (str1[i] < str2[i])
                return -1;
        }
    }
    return 0;
}
int main()
{
    char s1[100];
    char s2[100];
    while (1)
    {
        printf("\nEnter a string 1: ");
        scanf("%s", s1);
        printf("Enter a string 2: ");
        scanf("%s", s2);
        if (!inValidStr(s1) || !inValidStr(s2))
        {
            printf("Invalid string");
            break;
        }

        if (compareStr(s1, s2) > 0)
        {
            printf("s1 is greater to s2");
        }
        else if (compareStr(s1, s2) < 0)
        {
            printf("s1 is less to s2");
        }
        else
        {
            printf("s1 is equal to s2");
        }
    }
}