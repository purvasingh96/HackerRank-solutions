/*
1) Create n empty buckets (Or lists).
2) Do following for every array element arr[i].
.......a) Insert arr[i] into bucket[n*array[i]]
3) Sort individual buckets using insertion sort.
4) Concatenate all sorted buckets.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void bucketSort(float a[], int n){
	vector<float> bucket[n];
	int i;
	//input array elements into different buckets
	
	for(i=0;i<n;i++){
		int bi = n*a[i];
		bucket[bi].push_back(a[i]);
	}
	for(i=0;i<n;i++){
		sort(bucket[i].begin(), bucket[i].end());
	}
	int index=0, j;
	for(i=0;i<n;i++){
		for(j=0;j<bucket[i].size();j++){
			a[index++]=bucket[i][j];
		}
	}
}

int main()
{
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);
 
    cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}
