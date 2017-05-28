#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, i, k;
	cin>>k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int, int> m;
	int dc=0;
	int j;
	for(j=0;j<k;j++){
		if(m[a[j]]==0){
			dc++;
		}
		m[a[j]]+=1;
	}
	cout<<dc<<"\n";
	for(j=k;j<n;j++){
		if(m[a[j-k]]==1){
			dc--;	//as tit had count of 1 it counted for dc, now we are removing it so we have to reduce dc by 1
		}
		m[a[j-k]]-=1;
		
		if(m[a[j]]==0){
			dc++;
		}
		m[a[j]]+=1;
		cout<<dc<<"\n";
	}
}
