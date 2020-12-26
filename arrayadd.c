#include<stdio.h>
int main()
{
  int n,m,a[30],b[30],r[30],i,j,sum=0,t=0,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  scanf("%d",&m);
  for(i=0;i<m;i++)
    scanf("%d",&b[i]);
 if(n>m)
 {
    for(i=n-1;i>=0;i--)
    {
      if(m>0)
       sum+=a[i]+b[--m];
      else
       sum+=a[i];
      //printf("%d-%d\n",a[i],b[i]);
       r[c++]=sum%10;
       sum=sum/10;
      //printf("%d",sum);
    }
 }
 else
 {
  for(i=m-1;i>0;i--)
    {
       sum=a[i]+b[i];
       t=(t*10)+sum;
       r[c++]=t;
    }
 }

 for(i=c-1;i>=0;i--)
   printf("%d ",r[i]);
  
}
