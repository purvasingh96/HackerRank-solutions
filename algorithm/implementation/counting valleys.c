#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n], j=0;
	char str[n];
	scanf("%s", str);
	int i=0, sl=0, c=0;
	while(str[i]){
		char ch=str[i];
		if(ch=='U'){
			c=c+1;
		}
		else{
			if(c==0){
				sl=sl+1;
				c=c-1;
			}
			else{
			c=c-1;	
			}
			
		}
				i++;	
		
	}
	
	printf("%d", sl);
	
	
}
