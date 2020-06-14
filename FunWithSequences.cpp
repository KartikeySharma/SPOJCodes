#include<stdio.h>
int main()
{
  int n,m,i,j;
  int s[101],q[101];
 
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&s[i]);
 
  scanf("%d",&m);
  for(i=0;i<m;i++)
    scanf("%d",&q[i]);
 
 
  for(i=0,j=0;i<n && j<m;)
  {
    if(s[i]-q[j]<0)
    {
      printf("%d ",s[i]);
      i++;
 
    }
    else if(s[i]==q[j])
      i++;
    else
      j++;
  }
 
  for(;i<n;i++){
    printf("%d ",s[i]);
  }
  printf("\n");
 
  return 0;
}
