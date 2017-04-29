#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //int arr[] = {3, 2, 1, 2, 2, 3};
    int n, flag=0;
    cin>>n;
    int a[n], i, c[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	int x, y;
	for(i=0;i<n;i++){
		x^=a[i];
	}
	for(i=1;i<=n;i++){
		y^=i;
	}
	int res = x^y;
	cout<<res;
	return 0;
}
