#include<stdio.h>
int main()
{

	char ch;
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("vowel");
		}
		else
		{
			printf("consonant");
		}
	}

	else
	{
		printf("not an alphabet");
	}
	



}