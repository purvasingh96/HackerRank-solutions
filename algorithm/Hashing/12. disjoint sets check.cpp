#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, m, flag=0;
	cin>>n>>m;
	int i, j;
	int a[n], b[m];
	map<int, int> hm;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(j=0;j<m;j++){
		cin>>b[j];
	}
	for(i=0;i<n;i++){
		hm[a[i]]++;
	}
	for(j=0;j<m;j++){
		hm[b[j]]++;
	}
	int k;
	map<int, int>::iterator it;
	for(it=hm.begin();it!=hm.end();it++){
		if(it->second>1){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"disjoint";
	}
	else{
		cout<<"not disjoint";
	}
}
