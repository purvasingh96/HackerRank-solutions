// C++ program to demonstrate default behaviour of
// sort() in STL.
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
 
    for(i=0;i<n;i++){
    	if (a[abs(a[i])] <0){
    		flag=1;
			cout<<"duplicates exsist";
    		break;
		}
		else{
			a[a[i]] = -a[a[i]];
		}
	}
	if(flag==0){
		cout<<"no duplicates";
	}   
    return 0;
}
