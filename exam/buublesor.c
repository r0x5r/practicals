#include <stdio.h>
int bubble(int x[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n = 5, x[5];

    printf("enter data");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    bubble(x, n);
    printf("arraay elment after sorting ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}
