#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet:");
	scanf("%c",&c);
	switch(ch)
	{
		case'a':
		case'A':printf("Vowel");
		break;
		case'e':
		case'E':printf("Vowel");
		break;
		case'i':	
		case'I':printf("Vowel");
		break;
		case'o':
		case'O':printf("Vowel");
		break;
		case'u':
		case'U':printf("Vowel");
		break;
		default:printf("Consonant");
	}
	return 0;
}
