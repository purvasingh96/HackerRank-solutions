#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	int i, n, max, max_index, j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int, int>m;
	for(i=0;i<n;i++){
		m[a[i]]++;
	}
	for(i=0;i<n;i++){
		cout<<"m["<<a[i]<<"]: "<<m[a[i]]<<"\n";
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(m[a[i]]>m[a[j]]){
				max=m[a[i]];
				max_index=i;
			}
			else{
				max = m[a[j]];
				max_index=j;
			}
		}
		int t=max, q=max_index;
		while(t>0){
			cout<<a[q]<<" ";
			t--;
			m[a[q]]--;
		}
		
	}
}
