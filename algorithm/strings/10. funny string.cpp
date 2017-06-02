#include<iostream>
#include<string>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char word[10000];
	int flag=0;
	int t;
	cin>>t;
	while(t>0){
		cin>>word;
	map<char, int> hash;
	map<char, int> hash_rev;
	int i=0, size=0;
	while(word[i]!='\0'){
		size++;
		i++;
	}
	int j;
	for(j=0;j<size;j++){
		hash[word[j]]=(int)word[j];
	}
	
	string str = word;
	reverse(str.begin(), str.end());
	int k;;
	for(k=0;k<size;k++){
		hash_rev[str[k]]=(int)str[k];
	}
	
	int m;
	for(m=1;m<size;m++){
		int val1 = abs(hash[word[m]]-hash[word[m-1]]);
		int val2 = abs(hash_rev[str[m]]-hash_rev[str[m-1]]);
		//cout<<"val1: "<<val1<<" val2: "<<val2<<"\n";
		if(val1==val2){
			flag=1;
		}
		else{
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<"funny\n";
	}
	else{
		cout<<"not funny\n";
	}
	t--;
	}
	
	
}
