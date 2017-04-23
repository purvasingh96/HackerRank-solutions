//O(nlogn)
#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r){
	int i, j, k;
	int n1 = m-l+1;
	int n2 = r-m;
	
	int left[n1], right[n2];
	for(i=0;i<n1;i++){
		left[i]=a[l+i];
	}
	for(j=0;j<n2;j++){
		right[j]=a[m+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2){
		if(left[i]<right[j]){
			a[k] = left[i];
			i++;
		}
		else{
			a[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=left[i];
		k++;
		i++;
	}
	while(j<n2){
		a[k]=right[j];
		k++;
		j++;
	}	
}
void mergeSort(int a[], int l, int r){
	if(l<r){
		int m = l+ (r-l)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		
		merge(a, l, m, r);
	}
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<A[i]<<" ";
    cout<<"\n";
}
 

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = 6;
 
   
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
   
    printArray(arr, arr_size);
    return 0;
}
