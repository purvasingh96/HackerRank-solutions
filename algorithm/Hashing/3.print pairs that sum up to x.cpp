#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	map <int, int> m;
	for(i=0;i<n;i++){
		if(m[x-a[i]]==1){
			cout<<a[i]<<" "<<x-a[i];
			cout<<"\n";
		}
		else{
			m[a[i]]=1;
		}
	}
}
