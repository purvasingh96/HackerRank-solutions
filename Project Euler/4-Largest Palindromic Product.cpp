#include<iostream>
using namespace std;

int palindrome(long long n)
{
	int arr[6], remainder, reversednumber=0, flag=0;
	int j=0;
	long long copy = n;
	while(copy!=0LL)
	{
		arr[j++]=copy%10;
		remainder = copy%10;
		reversednumber = reversednumber*10+remainder; 
		copy=copy/10;
	}
	
	if(reversednumber==n)
	{
		flag=1;
	}
	else{
		flag=0;
	}
	return flag;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int flag=0;
	long long n, max=0;
	cin>>n;
	long long i, j;
	for(i=999;i>=100;i--)
	{
		for(j=999;j>=100;j--)
		{
			if(palindrome((i*j)) && (i*j)<n)
			{
				//cout<<i<<"*"<<j<<"=";
				if((i*j)>max)
				{
					max=(i*j);
				}
				
				//flag=1;
				
			}
		}
		
	}
	cout<<max<<"\n";
		
		t--;
	}
	
}
