#include<iostream>
#include<map>
using namespace std;
int main(){
	int n, i, j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int, int> m;
	int low, high;
	cin>>low>>high;
	
	//int j;
	for(j=low;j<=high;j++){
		m[j]=1;
	}
	for(i=0;i<n;i++){
		m[a[i]]--;
	}
	map<int, int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		if(it->second==1){
			cout<<it->first<<" ";
		}
	}
	
}
