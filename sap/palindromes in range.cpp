#include<iostream>
using namespace std;

int palindrome(int n)
{
	int rev, i;
	rev=0;
	for(i=n;i>0;i=i/10)
	{
		rev = rev*10 + i%10;
	}
	return (n==rev);
}

void countpal(int min, int max)
{
	int i;
	for(i=min;i<=max;i++)
	{
		if(palindrome(i))
		{
			cout<<i<<"\n";
		}
	}
}
int main()
{
	countpal(10, 100);
	return 0;
}
