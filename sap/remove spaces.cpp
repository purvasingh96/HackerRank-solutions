#include<iostream>
using namespace std;

void removespaces(char *str)
{
	int count=0;
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]!=' ')
		{
			str[count++]=str[i];
		}
		
	}
	str[count]='\0';
}

int main()
{
	char str[] = "g eeks for ge eeks ";
	removespaces(str);
	cout<<str;
	return 0;
}
