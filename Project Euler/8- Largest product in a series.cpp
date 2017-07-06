#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, k, prod=1, max=-1, j=0, t;
	cin>>t;
	while(t>0)
	{
		cin>>n>>k;
		string num;
		cin>>num;
		//cout<<(num[2]-'0')*(num[3]-'0');
		int i, max=-1;
		for(i=0;i<=(n-k-1);i++){
			prod=1;
			for(j=i;j<=i+k-1;j++)
			{
				prod=prod*(num[j]-'0');
				
			}
			if(prod>max)
			{
				max=prod;
			}
		}
		cout<<max<<"\n";
		t--;
	}
	
}
