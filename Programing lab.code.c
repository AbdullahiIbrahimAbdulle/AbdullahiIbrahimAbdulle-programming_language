#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, val;
    printf("kac sayi girmek istiyorsun ");
    scanf("%d", &n);

    int vals[n];

    for (i = 0; i < n; i++)
    {
        printf("sayi degeri girin %d : ", i+1);
        scanf("%d", &val);
        vals[i] = val;
    }

    for (i = 0; i < n; i++)
    {
        printf(" %d degeri   %d tane yazdi.\n", vals[i], occur(vals, n, vals[i]));
    }

    return 0;
}

int occur(int vals[], int n, int val)
{
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (vals[i] == val)
        {
            count++;
        }
    }
    return count;
}
