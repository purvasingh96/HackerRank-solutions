#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, cmax=0, cmin=0;
	scanf("%d", &n);
	int a[n];
	int max;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max)
		{
			max=a[i];
			cmax=cmax+1;
		}
	}
	printf("%d ", cmax);
	
	int j;
	int min = a[0];
	for(j=1;j<n;j++){
		if(a[j]<min){
			min=a[j];
			cmin=cmin+1;
		}
	}
	printf("%d", cmin);
}
