#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n], y[n];
	int i, k;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	int j;
	map<int, int> m;
	for(j=0;j<n;j++){
		cin>>y[j];
		m[x[j]]=y[j];
	}
	map<int, int> ::iterator it;
	map<int, int> ::iterator kt;
	auto b = m.begin();
	for(it=m.begin();it!=m.end();it++){
		for(kt=advance(b, 1);kt!=m.end();kt++){
			//cout<<"it: "<<it->first<<", "<<it->second<<" kt: "<<kt->first<<", "<<kt->second<<"\n";
			if(it->second==kt->first){
				if(kt->second==it->first){
					cout<<it->first<<" "<<kt->first<<"\n";
				}
			}
		}
	}
	
}

