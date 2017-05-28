#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main(){
	char text[100];
	int t;
	cin>>t;
	map<char, int> m;
	int flag=0;
	//int i=0;
	//cin>>text;
	//int x=strlen(text);
	char pattern[10]={'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
	int k=0;
	while(k<10){
		m[k]=0;
		k++;
	}
	/*map<char, int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<"\n";
	}*/
	//char text;
	while(t>0){
		cin>>text;
		k=0;
		while(k<10){
		m[k]=0;
		k++;
	}
	int i=0, j=0;
	while(i<strlen(text) && j<10){
		if(text[i]==pattern[j]){
			m[j]++;
			i++;
			j++;
		}
		//m[text[i]]++;
		else{
			i++;
		}
	}
	int l;
	for(l=0;l<10;l++){
		//cout<<m[l]<<"\n";
		if(m[l]==1){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==0){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
	}
	//cout<<"--------------------------------\n";
	t--;
		
	}
	
}
