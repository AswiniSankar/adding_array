/*
3
8
 0 0 0
 0 0 1
 0 1 0
 0 1 1
 1 0 0
 1 0 1
 1 1 0
 1 1 1
*/
#include<stdio.h>
int main()
{
  int a[100][10]={0},i,n,j=0,k=1,t;
  scanf("%d",&n);
   for(i=1;i<=n;i++)
     k=k*2;
  printf("%d\n",k);
  for(i=0;i<k;i++)
  {
    t=i;
     if(i==0)
      a[i][n]=0;
     else
    {
      while(t)
      {
        a[i][j++]=t%2;
        t/=2;
      }
    }
   j=0;
  }
  if(n==1)
    printf("%2d",0);
 else
{
  for(i=0;i<k;i++)
  { for(j=n-1;j>=0;j--)
     printf("%2d",a[i][j]);
    printf("\n");
  }
}
}
