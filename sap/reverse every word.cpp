#include<stdio.h>

void reverse(char *start, char *end)
{
	char temp;
	while(start<end)
	{
		temp = *start;
		*start++ = *end;
		*end--= temp;
	}
	
}

void reversewords(char *s)
{
	char *word_begin = s;
	char *temp = s;
	while(*temp)
	{
		temp++;
		if(*temp=='\0')
		{
			reverse(word_begin, temp-1);
		}
		else if(*temp==' ')
		{
			reverse(word_begin, temp-1);
			word_begin = temp+1;
		}
	}
	reverse(s, temp-1);
}

int main()
{
	//char s[] = "i like this program very much";
	//scanf("%c", &s);
	char c[100];
	scanf("%[^\t\n]s", &c);
	reversewords(c);
	printf("%s", c);
	getchar();
	return 0;
}
