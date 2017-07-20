#include<iostream>
#include<stack>
using namespace std;

int search(long a[], long n, long x, long y)
{
	long i, sum=0, t;
	int flagx=0, flagy=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flagx=1;
		}
		else if(a[i]==y)
		{
			flagy=1;
		}
	}
	if(flagx==0 && flagy==0)
	{
		return 0;
	}
	else{
		return 1;
	}
	
}
int main()
{
	long n, x, y, t;
	cin>>n>>t;
	long a[n];
	long i, j, c=0;
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			c=c+1;
		}
	}
	cout<<"c: "<<c;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//cin>>x>>y;
	long cx=0, cy=0, tc=0;
	//stack<int> mystack;
	//long j;
	long gap;
	while(t>0)
	{
		
		cin>>x>>y;
		
		
			tc=0;
		for(gap=1;gap<=n;gap++)
	{
		for(i=0;i<=n-gap;i++)
		{
			cx=0;
			cy=0;
			
			for(j=i;j<=i+gap-1;j++)
			{
				//cout<<"gap: "<<gap<<" i: "<<i<<" j: "<<j<<"\n";
				
				if(a[j]==x)
				{
					++cx;
				}
				else if(a[j]==y)
				{
					++cy;
				}
				
			}
			if(cx==cy)
				{
					//cout<<a[j]<<" ";
					++tc;
				}
		}
		//cout<<",";
	}
	
	cout<<tc<<"\n";
			
		
		
		t--;
	}
	
}
