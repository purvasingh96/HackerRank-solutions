#include <bits/stdc++.h>
using namespace std;

//a xor a =0
//a xor 0 =a
 
int main()
{
    //int arr[] = {3, 2, 1, 2, 2, 3};
    int n, flag=0;
    cin>>n;
    int a[n], i, c[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	int res=0;
	for(i=0;i<n;i++){
		res^=a[i];
	}
	cout<<res;
	
}
