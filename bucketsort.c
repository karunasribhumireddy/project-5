#include <stdio.h>
int main()
{
    int a[100], bucket[100] = {0};
    int n, i, j, k = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements (0 to 99): ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        bucket[a[i]]++;
    }
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < bucket[i]; j++)
            a[k++] = i;
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}