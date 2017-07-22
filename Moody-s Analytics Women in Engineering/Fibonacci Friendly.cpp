#include <bits/stdc++.h>

using namespace std;

int checkIfFibo(long n)
{
	long long fib[90];
    long long a=0, b=1;
    int j;
    fib[0]=0;
    fib[1]=1;
    for(j=2;j<=90;j++)
    {
    	fib[j]=fib[j-1]+fib[j-2];
	}
	int k;
	for(k=0;fib[k]<=n;k++)
	{
		if(fib[k]==n)
		{
			return 1;
		}
	}
	return 0;
}


int solve(long n){
    stack<int> mystack;
    int flag=0;
    int a[10]= {0};
    while(n!=0)
    {
    	int y;
    	y=n%10;
    	mystack.push(y);
    	n=n/10;
	}
	//cout<<"size of mystack: "<<mystack.size();
	while(!mystack.empty())
	{
		int x = mystack.top();
		//cout<<"x: "<<x<<"\n";
		++a[x];
		mystack.pop();
	}
	int h;
//	for(h=0;h<=9;h++)
//	{
//		cout<<a[h]<<" ";
//	}
	//cout<<"\n";
	int i;
	for(i=0;i<=9;i++)
	{
		if(checkIfFibo(a[i])==1)
		{
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	
	return flag;
}

int main() {
    int q;
    long long i;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long long n;
        cin >> n;
        if(n>=1 && n<=1110)
        {
        	cout<<n;
		}
		else{
			int rank1 = 1111;
			int rank2 = 9999;
			int rank3 = 99999;
			long rank4 = 999999;
			long rank5 = 10000000;
			
			//cout<<"case2";
			if(n>=10000000 && n<100000000)
			{
				//cout<<"case1";
				for(i=20457046;i<=1000000000;i++)
				{
					if(solve(i)==1)
					{
						if(rank5==n)
						{
							cout<<i;
							break;
						}
						rank5++;
					}
					
				}
				
			}
			else if(n>=999999 && n<1000000)
			{
				//cout<<"case2";
				for(i=11012207;i<=100000000;i++)
				{
					if(solve(i)==1)
					{
						if(rank4==n)
						{
							cout<<i;
							break;
						}
						rank4++;
					}
					
				}
			}
			else if(n>=99999 && n<=100000)
			{
				//cout<<"case3";
				for(i=100436;i<=10000000;i++)
				{
					if(solve(i)==1)
					{
						if(rank3==n)
						{
							cout<<i;
							break;
						}
						rank3++;
					}
					
				}
			}
			else if(n>=1111 && n<9999)
			{
				for(i=1112;i<=10000;i++)
				{
					//cout<<"i: "<<i;
					if(solve(i)==1)
					{
						if(rank1==n)
						{
							cout<<i;
							break;
						}
						rank1++;
					}
					
				}
				
			}
			else if(n>=9999 && n<=100000)
			{
				
				for(i=10009;i<=1000000;i++)
			{
				
				//cout<<"i: "<<i;
				if(solve(i)==1)
				{
					
					if(rank2==n)
					{
						
						cout<<i;
						break;
					}
					rank2++;
				}
				
			}
			}
			
		}
        cout<<"\n";
        
    }
    return 0;
}
