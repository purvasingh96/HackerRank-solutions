#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
#include<math.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(){
	long n;
	scanf("%ld", &n);
	long a[n], i;
	for(i=0;i<n;i++){
		scanf("%ld", &a[i]);
		
	}
	qsort(a, n, sizeof(long), compare);
	long min = a[n-1]-a[0];
	for(i=0;i<n;i++){
		long diff = abs(a[i+1]-a[i]);
		if(diff<min){
			min=diff;
		}
	}
	printf("%ld", min);
}
