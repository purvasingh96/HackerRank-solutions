#include<iostream>
#include<vector>
using namespace std;
//0 1 1 2 2 3 4 4 4 0 0 1

int main(){
	long n;
	long i;
	cin>>n;
	vector<long> a(n);
	vector<long> c(n);
	vector<long> output(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int j;
	for(j=0;j<100;j++){
		for(i=0;i<n;i++){
			if(j==a[i]){
				c[j]++;
			}
		}
	}
	for(j=1;j<100;j++){
		c[j]+=c[j-1];
	}
	for(j=n-1;j>=0;j--){
		output[c[a[j]]-1] = a[j];
		--c[a[j]];	
	}
	int k;
	for(i=0;i<n;i++){
		cout<<output[i]<<" ";
	}	
	return 0;
}
