#include<stdio.h>
int main()
{
    int arr1[1000],arr2[1000],m,n;
    scanf("%d",&m);
    
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    scanf("%d",&n);
    
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr2[j]);
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr2[j]==arr1[i])
            {
                printf("%d\t",arr1[i]);
                break;
            }
        }
    }
} 
