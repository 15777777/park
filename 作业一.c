#include <stdio.h>
#include <math.h>
int weishu(int a){
	int i=0,sum=0;
	for(i=1;;i=i*10){
		if(a/i!=0){
			sum++;
		}
		else break;
	}
	return sum;
}
int nishu(int a){
	int i,s,b,h=0;
	int c[s];
	s=weishu(a);
	for(i=0;i<=s-1;i++){
	b=a/(pow(10,i));
	c[i]=b%10;
	}
	for(i=0;i<=s-1;i++){
		h=h+c[i]*pow(10,s-1-i);
	}
	return h;
}
int main(void){
	int nishu(int a); 
	int weishu(int a);
	int a,c,i,sum=0;
	scanf("%d",&a);	
	c=nishu(a);
	for(i=0;i<=a;i++){
		c=nishu(i);
		if(i==c){
			printf("%d,",i);
			sum++;
			if(sum%10==0){
			printf("\n");
			}
		}
		
	}
	return 0;
}
