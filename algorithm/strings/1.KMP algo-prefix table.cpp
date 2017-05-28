#include<iostream>
using namespace std;

int main(){
	int m;
	cin>>m;
	char pattern[m];
	cin>>pattern;
	int f[m];
	f[0]=0;
	int i=1, j=0;
	while(i<m){
		if(pattern[i]==pattern[j]){
			f[i]=j+1;
			i++;
			j++;
		}
		else if(j>0){
			j=f[j-1];
		}
		else{
			i++;
		}
	}
	int n;
	cin>>n;
	char text[n];
	cin>>text;
	int k=0, l=0;
	while(k<n){
		if(text[k]==pattern[l]){
			if(l==m-1){
				cout<<k-l;
				break;
			}
			else{
				k++;
				l++;
			}
		}
		else if(l>0){
			l=f[l-1];
		}
		else{
			k++;
		}
	}
}
