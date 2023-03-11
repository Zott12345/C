#include <stdio.h>
int main(void){
  int n,i,a[1000],cnt,j,k;scanf("%d",&n);
  for(i=0;i<=n;i++){a[i]=i;}
  cnt=1;i=0;j=1;while(a[i]==0){i++;if(i>n)i=0;}
  while(cnt<n){
    if(j==3){a[i]=0;cnt++;}
    j++;if(j>3)j=1;
    i++;if(i>n)i=0;
    while(a[i]==0){i++;if(i>n)i=0;}}
  for(k=0;k<=n;k++){if(a[k])printf("%d",a[k]);}
  return 0;}
