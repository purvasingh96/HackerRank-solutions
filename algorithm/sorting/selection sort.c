//swap with the minimum element
#include<stdio.h>
#include<stdlib.h>
int main(){
	int t, n;
	scanf("%d", &n);
	int a[n];
	
	int i, j, k;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<n;i++){
		int min =i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min =j;
			}
			
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(k=0;k<n;k++){
		printf("%d", a[k]);
	}
}
