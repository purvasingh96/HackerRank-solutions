#include<iostream>
using namespace std;

int partition(int a[], int low, int high){
	int pivot = a[high];
	int i= low-1;
	int j;
	for(j=low;j<high;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[high]);
	return (i+1);
}

void quickSort(int a[], int low, int high){
	if(low<high){
		int part  = partition(a, low, high);
		
		quickSort(a, low, part-1);
		quickSort(a, part+1, high);
	}
}
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
// Driver program
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    quickSort(arr, 0, n-1);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
}
