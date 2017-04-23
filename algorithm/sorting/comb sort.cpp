//improved version of bubble sort
//gap starts with large value and shrinks by factor of 1.3 until it reaches 1
//better option in avg case, worst case remains O(n^2)

#include<bits/stdc++.h>
using namespace std;

int nextGap(int gap){
	gap= (gap*10)/13;
	if(gap<1){
		return 1;
	}
	return gap;
}

void combSort(int a[], int n){
	int gap =n;
	bool swapped=true;
	while(swapped==true || gap!=1){
		gap = nextGap(gap);
		swapped = false;
		int i;
		for(i=0;i<(n-gap);i++){
			if(a[i]>a[i+gap]){
				swap(a[i], a[i+gap]);
				swapped=true;
			}
		}
	}
}

int main()
{
    int a[] = {8, 4, 1, 56, 3, -44, 23, -6, 28, 0};
    int n = sizeof(a)/sizeof(a[0]);
 
    combSort(a, n);
 
    printf("Sorted array: \n");
    for (int i=0; i<n; i++)
        printf("%d ", a[i]);
 
    return 0;
}
