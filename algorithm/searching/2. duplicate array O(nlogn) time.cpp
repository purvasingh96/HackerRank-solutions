// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n, flag=0;
    cin>>n;
    int arr[n], i;
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
 
    sort(arr, arr+n);
 
 	int j;
   	for(j=0;j<n;j++){
   		if(arr[j]==arr[j+1]){
   			flag=1;
	   }
}
	   if(flag==1){
	   	cout<<"duplicates exsists";
		   }
		   else{
		   	cout<<"no duplicate";
		   }
	   
    return 0;
}
