#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	char str[100], str1[100];
	scanf("%s", &str);
	char *stack = (char *)malloc(sizeof((char* )strlen(str)));
	
	int top=-1, i,j=0;
	for(i=0;i<strlen(str);i++){
		if(i==0){
			stack[++top]=str[i];
		}
		else{
			if(stack[top]==str[i]){
				
				top--;
			}
			else{
				stack[++top]=str[i];
			}
		}
	}
	if(top==-1){
		printf("Empty String");
	}
	else{
		for(i=0;i<=top;i++){
			printf("%c", stack[i]);
		}
	}
	
	return 0;
}

