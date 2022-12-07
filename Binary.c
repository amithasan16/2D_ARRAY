#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);//test_case
    for (int j = 0; j < t; j++)
    {
        int n, c = 0;//how many time loop
       scanf("%d", &n);
       char ch;
       ch=getchar();
       char S[n+1];
        gets(S);
         for(int i=0;i<n-1;i++){
         if(S[i]=='0'&&S[i+1]=='1')
         c++;
         else if(S[i]=='1'&&S[i+1]=='0')
         c++;
        }
         printf("%d\n",c);
    }

    return 0;
}