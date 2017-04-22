#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, k;
	scanf("%d", &n);
	int i, a[n], j, pivot;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=1;i<n;i++){
		pivot=a[i];
		j=i;
		while(a[j-1]>pivot && j>=1){
			a[j]=a[j-1];
			j=j-1;
			
		}
		
		a[j]=pivot;
			for(k=0;k<n;k++){
				printf("%d", a[k]);
			}
			printf("\n");
	}
	
}
