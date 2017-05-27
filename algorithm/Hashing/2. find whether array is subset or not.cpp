#include<iostream>
#include<map>
using namespace std;

int subarray(int arr1[], int arr2[], int n, int l){
	map <int, int> m;
	if(l>n){
		return 0;
	}
	int i, j;
	for(i=0;i<n;i++){
		if(m[arr1[i]]>0){
			m[arr1[i]]++;
		}
		else{
			m[arr1[i]]=1;
		}
	}
	for(j=0;j<l;j++){
		if(m[arr2[j]!=0]){
			m[arr2[j]]--;
		}
		else{
			return 0;
		}
	}
	return 1;
}

int main(){
	int arr1[] = {1,4,3,4,7,7,3,8,4};
	int arr2[] = {4,8,1,4,4,4,7};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int l = sizeof(arr2)/sizeof(arr2[0]);
	int res = subarray(arr1 , arr2 , n , l);
	if(res==0){
		cout<<"no";
	}
	else{
		cout<<"yes";
	}
	return 0;
}
