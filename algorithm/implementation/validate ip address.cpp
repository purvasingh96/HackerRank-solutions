#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define delim "."

int valid_digit(char *ip)
{
	while(*ip)
	{
		if(*ip>='0' && *ip<='9')
		{
			*ip++;
		}
		else 
		return 0;
	}
	return 1;
}

int isvalidip(char *ip)
{
	int i, num, dots=0;
	char *ptr;
	if(ip==NULL)
	{
		return 0;
	}
	ptr = strtok(ip, delim);
	if(ptr==NULL)
	{
		return 0;
	}
	while(ptr)
	{
		if(!valid_digit(ptr))
		{
			return 0;
		}
		num = atoi(ptr);
		if(num>=0 && num<=255)
		{
			ptr = strtok(NULL, delim);
			if(ptr!=NULL)
			{
				++dots;
			}
		}
		else 
		{
			return 0;
		}
	}
	if(dots!=3)
	{
		return 0;
	}
	return 1;	
}
int main()
{
    char ip1[] = "128.0.0.1";
    char ip2[] = "125.16.100.1";
    char ip3[] = "125.512.100.1";
    char ip4[] = "125.512.100.abc";
    isvalidip(ip1)? printf("Valid\n"): printf("Not valid\n");
    isvalidip(ip2)? printf("Valid\n"): printf("Not valid\n");
    isvalidip(ip3)? printf("Valid\n"): printf("Not valid\n");
    isvalidip(ip4)? printf("Valid\n"): printf("Not valid\n");
    return 0;
}
