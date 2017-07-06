#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, flag=0;
	int t;
	cin>>t;
	while(t>0)
	{
		long long prod=1LL;
		cin>>n;
		int arr[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
		int i;
		for(i=0;i<12;i++){
			if(arr[i]<=n)
			{
				int j=n;
				while(j>=1)
				{
					if(pow(arr[i], j)<=n){
						
						prod = prod*pow(arr[i], j);
						break;
					}
					else{
						j--;
					}
				}
			}
			else{
				break;
			}
		}
		cout<<prod<<"\n";
		t--;
	}
	
}
