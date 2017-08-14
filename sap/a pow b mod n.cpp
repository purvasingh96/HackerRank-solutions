#include<iostream>
using namespace std;

int power(int x, int y, int p)
{
	int res = 1;
	x = x%p;
	while(y>0)
	{
		if(y%2!=0)
		{
			res= (res*x)%p;
		}
		y=y/2;
		x=(x*x)%p;
	}
	return res;
}

int main()
{
	int x=2;
	int y=5;
	int p=13;
	cout<<power(x, y, p);
	return 0;
}
