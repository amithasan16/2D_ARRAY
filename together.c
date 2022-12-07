#include<stdio.h>
int main()
{
    int i,j;
    int num[3][6];
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d ",&num[i][j]);
        }
        printf("\n");
    }
    
}