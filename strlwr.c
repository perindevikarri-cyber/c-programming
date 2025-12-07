#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string name:-");
	scanf("%s",&s);
	strlwr(s);
	printf("lower case string=%s",s);
	return 0;
}
