//same as bucket sort
//diff: moves item twice: once to array , once to final destination
#include<bits/stdc++.h>
using namespace std;

void pigeonhole(int a[], int n){
	int min=a[0], max=a[0], i;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	int range = max-min+1;
	vector<int> hole[range];
	
	
	for(i=0;i<n;i++){
		hole[a[i]-min].push_back(a[i]);
	}
	int index=0, j;
	for(i=0;i<n;i++){
		for(j=0;j<hole[i].size();j++){
			a[index++]= hole[i][j];
		}
	}
}

int main()
{
    int arr[] = {8, 3, 2, 7, 4, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    pigeonhole(arr, n);
 
    printf("Sorted order is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
 
    return 0;
}
