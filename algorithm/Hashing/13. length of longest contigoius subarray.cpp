#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, i, max_len=0, j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int, int> m;
	for(i=0;i<n;i++){
		m[a[i]]=a[i];
		int mn=a[i], mx=a[i];
		for(j=i+1;j<n;j++){
			if(m[a[j]]){
				break;
			}
			m[a[j]]=a[j];
			mn= min(mn, a[j]);
			mx= max(mx, a[j]);
			
			if(mx-mn == j-i){
				max_len = max(max_len, mx-mn+1);
			}
		}
	}
	cout<<max_len;
}
