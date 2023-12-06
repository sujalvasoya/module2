//rate,time,principle /100 --->> p*r*n/100

#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("enter price :\n");
	scanf("%f",&p);
	printf("enter rate :\n");
	scanf("%f",&r);
	printf("enter time :\n");
	scanf("%f",&t);
	
	si=p*r*t/100;
	printf("simple interest is : %.2lf",si);
}
