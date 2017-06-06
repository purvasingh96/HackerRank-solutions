#include<iomanip>
#include<iostream>
using namespace std;
int main(){
	int i=4;
	double j=4.0;
	string str ="HackerRank ";
	int k;
	cin>>k;
	double b;
	cin>>b;
	cin.ignore();
	char words[1000];
	cin.getline(words, sizeof(words));
	
	cout<<i+k<<endl;
	j=j+b;
	cout<<fixed<<setprecision(1)<<j<<endl;
	cout<<str<<words<<endl;
}
