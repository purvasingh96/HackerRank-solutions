#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, i, j, flag=0;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int, int> m;
	for(i=0;i<n;i++){
		m[a[i]]=a[i];
		
		for(j=i+1;j<n;j++){
			m[a[i]]=m[a[i]]+a[j];
			if(m[a[i]]==k){
				flag=1;
				cout<<"sum found between indexes "<<i<<" and "<<j;
				break;
			}
			
		}
	
	}
		if(flag==0){
			cout<<"no subarray";
		}
}
