#include<stdio.h>
int main()
{
	int a[100],n,i,low,high,Mid,x;
	printf("enter array sizes:");
	scanf("%d",&n);
	printf("enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element:");
	scanf("%d",&x);
	low=0;
	high=n-1;
	Mid=(low+high)/2;
	while(low<high)
	{
		if(x==a[Mid])
		break;
		else if(x>a[Mid])
		low=Mid+1;
		else
		high=Mid-1;
		Mid=(low+high)/2;
	}
	if(x==a[Mid])
	printf("search element is found");
	else
	printf("search element is not found");
	return 0;
}
