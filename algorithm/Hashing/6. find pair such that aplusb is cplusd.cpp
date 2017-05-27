// Find four different elements a,b,c and d of array such that
// a+b = c+d
#include<bits/stdc++.h>
using namespace std;

bool findpair(int a[], int n){
	map<int , pair<int, int> > hash;
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			int sum = a[i]+a[j];
			if(hash.find(sum)==hash.end()){
				hash[sum]=make_pair(i, j);
			}
			else{
				pair<int, int> pp = hash[sum];
				cout<<"("<<a[pp.first]<<","<<a[pp.second]<<"), ("<<a[i]<<","<<a[j]<<")";
			}
		}
	}
}

int main()
{
    int arr[] = {3, 4, 7, 1, 2, 9, 8};
    int n  =  sizeof arr / sizeof arr[0];
    findpair(arr, n);
    return 0;
}
