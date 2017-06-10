#include<iostream>
using namespace std;

int binary(int n){
	int a[n];
	int i=0,j=0;
	while(n!=0){
		a[j++]=n%2;
		n=n/2;
	}
	int c=0, max=INT_MIN;
	for(i=0;i<j;i++){
		//cout<<a[i];
		int c=0;
		if(a[i]==1){
			 int k=i;
			c=1;
			while(a[k+1]==1){
				c=c+1;
				k=k+1;
			}
			if(c>max){
				max=c;
			}
		}
	
	}
	return max;
}

int main(){
	
    int n;
    cin >> n;
    cout<<binary(n);
    return 0;
}

