#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	qsort(arr, 12, sizeof(int), compare);
	int i;
	for(i=0;i<12;i++)
	{
		printf("%d ", arr[i]);
	}
}
