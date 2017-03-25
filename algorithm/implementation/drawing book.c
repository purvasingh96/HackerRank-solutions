#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, p, i, c=0;
	scanf("%d", &n);
	scanf("%d", &p);

	
	while(p<n-1){
		c=c+1;
		n=n-2;
	}
		
	int d=0;
	int x=1;
	if(p==1){
		d=0;
	}
	else{
	
	while(x<p){
		d=d+1;
		x=x+2;
	}
	
	}
	//printf("behind: %d, start: %d\n", c, d);
	if(d<c){
		printf("%d", d);
	}
	else{
		printf("%d", c);
	}
}
