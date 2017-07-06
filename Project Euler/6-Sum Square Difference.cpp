#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		long long res=0;
		res = abs(3*pow(n, 2) + 2*n - 3*pow(n, 4) - 2*pow(n, 3));
		res=res/12;
		cout<<res<<"\n";	
        t--;
	}
	
}
