#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int in[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&in[i]);
    }
    int maximumeven=0;
    for(int i=0;i<n-1;i++)
    {
        if(in[i]%2==0&&in[i]>maximumeven)maximumeven=in[i];
        for(int j=i+1;j<n;j++)if((in[i]+in[j])%2==0&&(in[i]+in[j])>maximumeven)maximumeven=in[i]+in[j];
    }
    if(in[n-1]%2==0&&in[n-1]>maximumeven)maximumeven=in[n-1];
    printf("%d\n",maximumeven);
    return 0;
}