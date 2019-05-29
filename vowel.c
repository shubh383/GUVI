#include<stdio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if((s<='z' && s>='a') || (s<='Z' && s>='A'))
	{
		if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U' || s=='a' || s=='e' || s=='i' || s=='o' || s=='u')
		{
			printf("Vowel");
		}
		else
		{
			printf("Consonant");
		}
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
