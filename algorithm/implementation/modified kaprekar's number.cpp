#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int isKaprekar(long long n)
{
	//cout<<"hello";
    stack<long long> mystack;
    long long square;
    square = n*n;
    long long a[10000000000000];
    int k=0;
    long long copy = square;
    while(copy!=0)
    {
        int temp = copy%10;
        copy = copy/10;
        mystack.push(temp);
    }
    //cout<<"fine";
    long long numleft=0, numright=0;
    long long sizestack = mystack.size();
    long long x = sizestack/2;
    long long y = sizestack-x;
    while(x>0)
    {
    	int top = mystack.top();
    	numleft = numleft+top*pow(10, x-1);
    	--x;
    	mystack.pop();
	}
    //cout<<"numleft: "<<numleft;
	while(y>0)
	{
		int top = mystack.top();
		numright = numright+top*pow(10, y-1);
		--y;
		mystack.pop();
	}
    //cout<<"numright: "<<numright<<"\n";
	if(numleft+numright==n)
	{
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long p, q;
    cin>>p>>q;
    long i;
    int flag=0;
    for(i=p;i<=q;i++)
    {
        
        if(isKaprekar(i))
        {
        	flag=1;
            cout<<i<<" ";
        }
    }
    if(flag==0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
