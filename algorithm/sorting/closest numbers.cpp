#include<iostream>
#include<algorithm>
#include<limits>
#include<math.h>
using namespace std;
int main(){
	long i, n;
	cin>>n;
	long a[n], b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	
	long j,  min_diff=a[1]-a[0], min_i, min_j, k=0;
	for(i=0;i<n;i++){
		j=i+1;
		int diff = abs(a[j]-a[i]);
		cout<<diff<<"\n";
		if(diff<min_diff){
			min_diff=diff;
			//min_i=i;
			//min_j=j;
		}
		
		//b[k++]
		
		}
		cout<<"answer: ";
		for(i=0;i<n;i++){
			j=i+1;
			if(abs(a[i]-a[j])==min_diff){
				cout<<a[i]<<" "<<a[j];
			}
			//cout<<a[i];
		}
		
		//cout<<"answer: "<<a[min_i]<<" "<<a[min_j]<<" "<<min_diff;
		
	}
	

