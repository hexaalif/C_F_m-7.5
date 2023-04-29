#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        // printf(" %d ", sum);
    }
    long long int a;
    if (sum < 0)
    {
        a = sum * (-1);
        printf("%lld", a);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}