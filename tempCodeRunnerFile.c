#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char input[21];
        scanf("%s",input);
        char cpy[21];
        strcpy(cpy,input);
        int size=strlen(cpy);
        for(int i=0;i<=size/2;i++)
        {
            char buff=cpy[i];
            cpy[i]=cpy[size-i-1];
            cpy[size-i-1]=buff;
        }
        if(strcmp(input,cpy)==0)
        {
            if(strlen(input)>7)
            {
                printf("%c%d%c\n",input[0],strlen(input)-2,input[strlen(input)-1]);
            }
            else printf("%s\n",input);
        }
        else printf("Not Palindrome\n");
    }
return 0;
}