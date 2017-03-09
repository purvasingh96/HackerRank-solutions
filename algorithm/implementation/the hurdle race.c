#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int max= a[0];
	for(i=1;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	int drinks;
	drinks = max-k;
	if(drinks <0){
		drinks=0;
	}
	printf("%d", drinks);
}
