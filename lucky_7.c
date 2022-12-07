
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char c;
    scanf("%c",&c);
    while(t--)
    {
        char input[21];
        scanf("%s",input);
        char cpy[21];
        strcpy(cpy,input);
        int size=strlen(cpy);
        for(int i=0;i<size/2;i++)
        {
            char c=cpy[i];
            cpy[i]=cpy[size-i-1];
            cpy[size-i-1]=c;
        }
        if(strcmp(input,cpy)==0)
        {
            if(strlen(input)>7)
            {
                printf("Case #2: %c%d%c\n",input[0],strlen(input)-2,input[strlen(input)-1]);
            }
            else printf("Case #3: %s\n",input);
        }
        else printf("Case #1: Not Palindrome\n");
    }
return 0;
}