#include<stdio.h>
int main(){
	int n,m,f,i,c=0;
	int a[101];
	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	f = m % n;
	for(;;){
		if(f < n){
			printf("%d",a[f]);
			c++;
			f++;
			if(c!=n)printf(" ");
			else break;
		}
		else{
			f=f-n;
			printf("%d",a[f]);
			f++;
			c++;
			if(c!=n)printf(" ");
			else break;
		}
	}
	
	return 0;
}
