#include<iostream>	//O(n^2)
using namespace std;
int main(){
	int n, flag=0;
	cin>>n;
	int a[n];
	int i, j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				flag=1;
			}
		}
	}
	if(flag==1){
		cout<<"duplicate exsists";
		
	}
	else{
		cout<<"duplicate doesnot exsists";
	}
}
