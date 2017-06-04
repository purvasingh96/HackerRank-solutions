#include<iostream>
#include <algorithm>
#include<stack>
using namespace std;

int main(){
	int n;
	cin>>n;
	string words;
	
	while(n>0){
		cin>>words;
	stack<char> mystack;
	int len = words.length();
	int i=1,c=0;
	mystack.push(words[0]);
	while(i<len){
		if(words[i]==mystack.top()){
			c++;
			
		}
		else{
			mystack.push(words[i]);
			
		}
		i++;
	}
	cout<<c<<"\n";
	n--;
	}
	
}
