#include<stdio.h>
#include<string.h>
int main()
{
	printf("Name:Teja\n");
	printf("Reg.no:192210626\n");
	char str1[20];
	int l;
	printf("enter a string: ");
	scanf("%s",str1);
	l=strlen(str1);
	printf("string reverse is %d ",l);
}
