#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //int arr[] = {3, 2, 1, 2, 2, 3};
    int n, flag=0;
    cin>>n;
    int a[n], i,j;
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	int c=0, max=-1, max_index;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
			}
			
		}
		if(c>max){
			max=c;
			max_index=i;
		}
	}
	cout<<a[max_index];
}
