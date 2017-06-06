#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	double x;
	cin>>x;
	double tip, tax;
	cin>>tip>>tax;
	tip = x*tip/100;
	cout<<fixed<<setprecision(2)<<tip<<"\n";
	tax = x*tax/100;
	cout<<fixed<<setprecision(2)<<tax<<"\n";
	double total_cost = x+tip+tax;
	int round_value = round(total_cost);
	
	cout<<"The total meal cost is "<<round_value<<" dollars.";
	
}
