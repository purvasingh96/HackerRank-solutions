#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n>0){
		string a;
		cin>>a;
		int len =a.length();
		char even[len/2],odd[len/2];
		int i=0, j=0;
		int  e=0, o=0;
		while(i<len){
			if(i%2==0){
				even[e++]=a[i];
			}
			else{
				odd[o++]=a[i];
			}
			i++;
		
		}
		int k, l;
		for(k=0;k<e;k++){
			cout<<even[k];
		}
		cout<<" ";
		for(l=0;l<o;l++){
			cout<<odd[l];
		}
		cout<<"\n";
		n--;
	}

	
}
