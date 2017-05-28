#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char pattern[10]={'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
	int i=0, j=0;
	int t;
	cin>>t;
	char text[10000];
	while(t>0){
		cin>>text;
		for(i=0;i<strlen(text);i++){
			if(j<10 && text[i]==pattern[j]){
				j++;
			}
		}
		if(j==10){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		t--;
	}
}
