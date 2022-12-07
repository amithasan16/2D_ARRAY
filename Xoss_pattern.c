#include <stdio.h>
int main()
{
    int i, j,n;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);

        for (j = 2; j <= n; j++)
        {
            if (i == 1)
            {
                printf("%d", j);
            }
            else if (i == n || j == n)
                printf("%d", n);
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
