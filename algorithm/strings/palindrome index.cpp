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
		int flag=0;
		c=0;
		string a;
	cin>>a;
	int len = a.length();
	if(len%2==0){
		int x = len/2;
		for(i=0;i<x;i++){
			mystack.push(a[i]);
		}
		int j=len/2;
		while(j<len){
			if(a[j]!=mystack.top()){
				cout<<j<<"\n";
				flag=1;
				break;
			}
			else{
				mystack.pop();
			}
			j++;
		}
	}
	else{
		int x =len/2;
		for(i=0;i<x;i++){
			mystack.push(a[i]);
		}
		int j=(len/2)+1;
		while(j<len){
			if(a[j]!=mystack.top()){
				cout<<j<<"\n";
				flag=1;
				break;
			}
			else{
				mystack.pop();
			}
			j++;
		}
		
	}
	if(flag==0){
		cout<<"-1\n";
	}
	n--;
	}
	
}
