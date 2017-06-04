#include<iostream>
using namespace std;
int main()
{
	int n, flag=0, t;
	cin>>t;
	while(t>0){
		cin>>n;
	char a[n][n];
	
	int i,j, k;
	int count=n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
		int c=n;
		while(c>0){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>a[i][j+1]){
				swap(a[i][j], a[i][j+1]);
			}
			
		}
	}


		for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(a[i][j]>a[i+1][j]){
				swap(a[i][j], a[i+1][j]);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]<a[i][j+1]){
				flag=1;
			}
			else{
				flag=0;
				break;
			}
		}
	}
	c--;
	}
	
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(a[i][j]<a[i+1][j]){
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	t--;
	}
	
	
	
}
