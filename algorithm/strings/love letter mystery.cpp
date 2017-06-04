#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int main()
{
	stack<char> mystack;
	int i, c, n;
	cin>>n;
	while(n>0){
		c=0;
		string a;
	cin>>a;
	int len = a.length();
	if(len%2==0){
		int x = len/2;
		for(i=0;i<x;i++){
			mystack.push(a[i]);
		}
		int j;
		for(j=len/2;j<len;j++){
			c+=(abs(a[j]-mystack.top()));
			mystack.pop();
		}
	}
	else{
		int x =len/2;
		for(i=0;i<x;i++){
			mystack.push(a[i]);
		}
		int j;
		for(j=(len/2)+1;j<len;j++){
			c+=(abs(a[j]-mystack.top()));
			mystack.pop();
		}
		
	}
	cout<<c<<"\n";
	n--;
	}
	
}
