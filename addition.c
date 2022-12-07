#include<stdio.h>
int main()
{
    int N=10,M=10,i,j;
    scanf("%d %d",&N,&M);//enter row & col
    int mat1[N][M];
    
    for(i=0;i<N;i++)//row
    {
        for(j=0;j<M;j++)//col
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<N;i++)
{
        for(j=0;j<M;j++)
     {
            if(mat1[i][j]==i+1 && mat1[i][j]==j+1)
            {
                mat1[i][j]+=3;
            }
            else if(mat1[i][j]==i+1 && mat1[i][j] != j+1) // row increase
            {
                mat1[i][j]+=2;
            }
            else if(mat1[i][j]==j+1 && mat1[i][j]!=i+1)// col increase
            {
                mat1[i][j]+=1;
            }
     }
 }

   for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }   
}