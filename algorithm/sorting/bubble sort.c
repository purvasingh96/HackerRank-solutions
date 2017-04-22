#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t, n;
	scanf("%d", &n);
	int a[n];
	
	int i, j, k;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("sorted: ");
	for(k=0;k<n;k++){
		printf("%d", a[k]);
	}
}
