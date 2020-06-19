#include<stdio.h>

int main()
{
    int t,m,n,ci,cj;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d%d%d",&m,&n,&ci,&cj);
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==ci || j==cj)
                    printf("%c",'*');
                else
                    printf("%c",'.');
            }
            if(t==1 && i==m)
            break;
            else
                printf("\n");
        }
        t-=1;
    }
}
