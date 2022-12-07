#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char input[n+1];
    scanf("%s",input);
    int plus=0,minus=0;
    int plusmax=0,minusmax=0;
    for(int i=0;i<n;i++)
    {
        if(input[i]=='+'&&input[i+1]=='+')plus++;
        else if(input[i]=='-'&&input[i+1]=='-')minus++;
        else
        {
            if(plus+1>plusmax)plusmax=plus+1;
            if(minus+1>minusmax)minusmax=minus+1;
            plus=0;
            minus=0;
        }
    }
    if(plusmax>minusmax)printf("%d",plusmax);
    else printf("%d",minusmax);
}