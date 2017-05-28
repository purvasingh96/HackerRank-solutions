#include<iostream>
#include<map>
using namespace std;

int main(){
	
	int n, i, flag=0, k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int, int> m;
	for(i=0;i<n;i++){
		m[i]=m[i-1]+a[i];
		for(k=0;k<i;k++){
			if(m[k]==m[i]){
				flag=1;
				break;
			}
		}
	}
	if(flag==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
}
