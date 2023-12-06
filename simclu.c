#include<stdio.h>
main(){
	int a,b,sum,sub,div,mul,mod;
	printf("Enter two values: ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("add:%d\n",sum);
	printf("sub:%d\n",sub);
	printf("mul:%d\n",mul);
	printf("div:%d\n",div);
	printf("mod:%d\n",mod);
}
