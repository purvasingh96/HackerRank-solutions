#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int i, k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	int c=n, flag=1, diff;
	map <int, vector<int> > m;
	for(i=0;i<n;i++){
		m[a[i]].push_back(i);
	}
	int j;
	map<int, vector<int> >::iterator it;
	for(it=m.begin();it!=m.end();it++){
		for(j=it->second.size()-2;j>=0;j--){
			diff=it->second.size()-1;
			it->second[diff]-=it->second[j];
			if(it->second[diff]>k){
				flag=0;
				break;
			}
			else{
				flag=1;
			}
		}
	}
	if(flag==0){
		cout<<"out of bound";
	}
	else{
		cout<<" not out of bound";
	}
}
