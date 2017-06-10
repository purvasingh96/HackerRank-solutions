#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
	
	int n;
	cin>>n;
	string name, contact;
	map<string, string> m;
	int i;
	for(i=0;i<n;i++){
		cin>>name>>contact;
		m[name]=contact;
	}   
	cin.ignore();	//ignoring the next line 
	while(getline(cin, name)){
		map<string, string>::iterator it = m.find(name);
		if(it!=m.end()){
			cout<<name<<"="<<m[name]<<endl;
		}
		else{
			cout<<"Not found"<<endl;
		}
	}
    return 0;
}

