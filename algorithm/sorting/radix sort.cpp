//sorts only numbers
//from least to most significant digits

#include<iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(int a[], int n, int exp){
	int output[n], i;
	int count[10]={0};	//digits 0-9 array
	for(i=0;i<n;i++){
		count[(a[i]/exp)%10]++;
	}
	//changing count to point to actual position of digit in output array
	for(i=1;i<10;i++){
		count[i]+=count[i-1];
	}
	
	for(i=n-1;i>=0;i--){
		output[ count[ (a[i]/exp)%10 ]-1 ]= a[i];
		count[ (a[i]/exp)%10 ]--;
	}
	for(i=0;i<n;i++){
		a[i]=output[i];
	}
}

void radixSort(int a[], int n){
	int m = getMax(a, n);
	int exp;
	for(exp=1; m/exp > 0; exp*=10){
		countSort(a, n, exp);
	}
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixSort(arr, n);
    print(arr, n);
    return 0;
}
