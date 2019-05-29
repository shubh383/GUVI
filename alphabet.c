#include<stdio.h>
int main()
{
	char s;
	printf("enter the no:");
	scanf("%c",&s);
	if((s>='A' && s<='Z') || (s>='a' && s<='z'))
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
return 0;
}
