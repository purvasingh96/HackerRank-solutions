#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, flag=0;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	i=0;
	arr[n]=0;
	while(i<n/2){
		int l=arr[2*i+1];
		int r=arr[2*i+2];
		
		if(arr[i]>=l && arr[i]>=r){
			printf("arr[%d]: %d, l: %d, r: %d\n", i, arr[i], l, r);
			flag=1;
		}
		else{
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1){
		printf("heap");
	}
	else{
		printf("not heap");
	}
}
