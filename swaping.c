#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("before swaping of two numbersa=%d b=%d",a,b);
	scanf("%d%d",&a,&b);
	a=temp;
	b=a;
	temp=b;
	printf("after swaping of two numbers a=%d b=%d",a,b);
	return 0;
}
