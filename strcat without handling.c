#include<stdio.h>
int main()
{
	char s1[20],s2[20],i,l;
	printf("enter string1 name:-");
    scanf("%s",&s1);
    printf("enter string2 name:-");
    	scanf("%s",&s2);
    	for(i=0;s1[i]!='\0';i++);
    	l=i;
    	for(i=0;s2[i]!='\0';i++);
    	{
    		s1[l++]='\0';
		}
    	{
    		s1[l]='\0';
		}
	 printf("merge string=%s",s1);
	return 0;
}
