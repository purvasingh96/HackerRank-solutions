#include<stdio.h>
#include<stdlib.h>

void heapify(int arr[],int n, int i){
	int max=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && arr[l]>arr[i]){
		max=l;
	}
	if(r<n && arr[r]>arr[max]){
		max=r;
	}
	if(max!=i){
		int t=arr[i];
		arr[i]=arr[max];
		arr[max]=t;
		
		heapify(arr, n, max);
	}
}
void heapsort(int arr[], int n){
	int i;
	for(i=(n/2)-1;i>=0;i--){
		heapify(arr, n, i);
	}
	for(i=n-1;i>=0;i--){
		int t=arr[0];
		arr[0]=arr[i];
		arr[i]=t;
		
		heapify(arr, i, 0);
	}
}
void printArray(int arr[], int n)
{
	int i;
    for (i=0; i<n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    heapsort(arr, n);
 
    
    printArray(arr, n);
}
