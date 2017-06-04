#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
#include<math.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main(){
	long  n;
	scanf("%ld", &n);
	long i, a[n];
	for(i=0;i<n;i++){
		scanf("%ld", &a[i]);
	}
	long long cal=0;
	qsort(a, n, sizeof(long), compare);
	for(i=0;i<n;i++){
		printf("%ld ", a[i]);
	}
	for(i=0;i<n;i++){
		cal+=(a[i]*pow(2, i));
		printf("%lld\n", cal);
	}
	printf("%lld", cal);
	
}
