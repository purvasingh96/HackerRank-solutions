#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, i, range;
	cin>>n>>range;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	int transmitter_pos=0, sum=0, count=0;
	for(i=1;i<n;i++){
		if(a[i]-a[transmitter_pos]<=range){
			sum+= a[i]-a[transmitter_pos];
			if(sum<=range){
				transmitter_pos=i;
			}
		}
		else{
			count++;
			sum=0;
			transmitter_pos=i;
			//cout<<"tansmitter_pos: "<<transmitter_pos<<"\n";
		}
		
	}
	cout<<count+1;
	return 0;
}
