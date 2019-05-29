#include<stdio.h>
int main()
{
	char s;
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
