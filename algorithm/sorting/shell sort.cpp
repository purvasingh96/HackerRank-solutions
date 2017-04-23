#include<iostream>
using namespace std;
int main(){
	int i, j, gap, t, n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(gap=n/2;gap>0;gap/=2){
		for(i=gap;i<n;i++){
			t = a[i];
			j=i;
			while(j>=gap && a[j-gap]>t){
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=t;
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	
	}
