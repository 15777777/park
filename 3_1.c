#include <stdio.h>
int main(){
	int n,i;
	float sum;
	sum=1;
	scanf("%d",&n);
	float a[43];
	a[0]=1;
	a[1]=1;
	for(i=0;i<20;i++){
		a[i+2]=a[i]+a[i+1];
		printf("a[%d]=%d ",i+2,a[i+2]);
	}
	for(i=1;i<=n;i++){
		sum=sum+(a[i+1]/a[i]);
		printf("\nsum_%d=%f",i,sum);
	}
	printf("\n%.2f",sum);
}
