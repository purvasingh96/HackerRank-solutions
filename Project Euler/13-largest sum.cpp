#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	
	cin>>n;
	string a[n];
	int i, j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//cout<<a[2][48]<<"\n";
	int sum=0, carry=0;
	stack<int> mystack;
	int k;
	int size=50;
	
	for(j=49;j>=0;j--)
	{
		sum=0;
		for(i=0;i<n;i++)
		{
			//cout<<"a[i][j]-'0': "<<(a[i][j]-'0');
			sum += (a[i][j] - '0');
						
		}
		sum=sum+carry;
		//cout<<"sum: "<<sum;
		int temp = sum;
		sum=sum%10;
		
		carry=temp/10;
		//cout<<"sum: "<<sum<<"carry: "<<carry<<"\n";
		mystack.push(sum);
	}
	//cout<<carry;
	
	int diff;
	if(carry>0)
	{
		mystack.push(carry);
		int copy = carry;
		int count=0;
		while(copy!=0)
		{
			copy=copy/10;
			count++;
		}
		//cout<<count;
		if(count>=1)
		{
			diff= 11-count;
		}
	}
	//cout<<diff;
	//int x=10;
	while(diff>0)
	{
		int top = mystack.top();
		cout<<top;
		mystack.pop();
		diff--;
	}
}
