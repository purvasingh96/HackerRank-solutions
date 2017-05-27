#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, s=0;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int max_len=0;
	map<int, int> m;
	for(i=0;i<n;i++){
		s+=a[i];
		if(a[i]==0 && max_len==0){
			max_len=1;
		}
		if(s==0){
			max_len=i+1;
		}
		if(m.find(s)!=m.end()){
			max_len = max(max_len, i-m[s]);
		}
		else{
			m[s]=i;
		}
	}
	cout<<"res: "<<max_len;
}
