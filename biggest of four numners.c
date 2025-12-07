#include<stdio.h>
int main()
{
	int a,b,c,total,per;
	printf("enter a&b&c values");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	per=total/3;
	if(per>=90)
	printf("A grade");
	else if(per>=70)
	printf("B  grade");
	else if(per>=50)
	printf("C grade");
	else if(per<49)
	printf("D grade");
	return 0
}
