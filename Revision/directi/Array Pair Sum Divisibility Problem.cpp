#include<iostream>
#include<limits>
using namespace std;


int main()
{
	int n, k, t;
	cin>>t;
	while(t>0)
	{
		cin>>n;
	int i, a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	int flag=0;
	int x=0, y=1, j;
	for(i=x;i<n;i++)
	{
		for(j=y;j<n;j++)
		{
			if(a[i]!=INT_MIN && a[j]!=INT_MIN)
			{
				int sum = a[i]+a[j];
				if(sum%k==0)
				{
					a[i]=INT_MIN;
					a[j]=INT_MIN;
					//++c;
					++y;
					break;
				}
			}
			else if(a[i]==INT_MIN)
			{
				++y;
				break;
			}
		}
	}
	int k;
	for(k=0;k<n;k++)
	{
		if(a[k]==INT_MIN)
		{
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	t--;
	}	
}
