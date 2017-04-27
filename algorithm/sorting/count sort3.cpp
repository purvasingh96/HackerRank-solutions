#include<iostream>
#include<vector>
using namespace std;

int main(){
	long n;
	cin>>n;
	vector<long> a(n);
	vector<long> c(100);
	int i;
	for(i=0;i<100;i++){
		c[i]=0;
	}
	char s[10];
	//long i;
	for(i=0;i<n;i++){
		cin>>a[i];
		cin.getline(s, sizeof(s));
	}
	int j;
	for(i=0;i<100;i++){
		for(j=0;j<n;j++){
			if(a[j]<i){
				c[i]++;
			}
		}
	}
	
	for(i=0;i<100;i++){
		cout<<c[i]<<" ";
	}
}
