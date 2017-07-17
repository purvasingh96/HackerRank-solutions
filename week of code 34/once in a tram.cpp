#include<iostream>
using namespace std;

int main()
{
	long n;
	cin>>n;
	long i, sum1=0, sum2=0;
	int a[6];
	
	for(i=n+1;i<=999999;i++)
	{
		//cout<<i<<"\n";
		
		int k;
		for(k=0;k<6;k++)
		{
			a[k]=0;
		}
		int x =i;
		int j=5;
		//cout<<"x: "<<x;
		while(x!=0 &&j>=0)
		{
			a[j]=x%10;
			--j;
			x=x/10;
		}
		//cout<<"a[3], 4, 5;"<<a[3]<<" "<<a[4]<<" "<<a[5];
		sum1 = a[0]+a[1]+a[2]; //cout<<"sum1: "<<sum1;
		sum2 = a[3]+a[4]+a[5]; //cout<<"sum2: "<<sum2;
		if(sum1==sum2)
		{
			//cout<<"equal";
			cout<<i;
			break;
		}
		
	}
}
