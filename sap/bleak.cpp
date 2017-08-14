#include<bits/stdc++.h>
using namespace std;

int ceillog2(int n)
{
	int count=0;
	n--;
	while(n>0)
	{
		n=n>>1;
		count++;
	}
	return count;
}

int isbleak(int n)
{
	int i;
	for(i=n-ceillog2(n);i<n;i++)
	{
		if(i+__builtin_popcount(i)==n)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	if(isbleak(3))
	{
		cout<<"bleak";
	}
	else{
		cout<<"not bleak";
	}
}
