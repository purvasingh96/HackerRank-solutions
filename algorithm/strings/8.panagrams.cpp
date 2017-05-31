#include<iostream>
#include<map>

using namespace std;


int main(){
	map<char, int>hash;
	int flag=0;
	char words[1000];
	cin.getline(words, sizeof(words));	 
	char i;
	for(i='a';i<='z';i++){
		hash[i]=0;
	}
	int j;
	for(i=0;i<sizeof(words);i++){
		if(words[i]==' '){
			i++;
		}
		if(words[i]>='A' && words[i]<='Z'){
			words[i]=tolower(words[i]);
		}
		hash[words[i]]+=1;
	}
	for(i='a';i<='z';i++){
		//cout<<"hash["<<i<<"]: "<<hash[i]<<"\n";
		if(hash[i]==0){
            flag=1;
			cout<<"not pangram";
			break;
		}
	}
    if(flag==0){
        cout<<"pangram";
    }
    
	
}
