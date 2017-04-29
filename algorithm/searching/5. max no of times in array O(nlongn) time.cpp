#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //int arr[] = {3, 2, 1, 2, 2, 3};
    int n, flag=0;
    cin>>n;
    int a[n], i;
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	int c=0, max=-1, max_index;
	sort(a, a+n);
	for(i=0;i<n;i++){
		while(a[i]==a[i+1]){
			c=c+1;
		}
		if(c>max){
			max=c;
			max_index=i;
		}
	}
	cout<<a[max_index];
	
}
