#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	int n;
	scanf("%d", &n);
	char name[n];
	scanf("%s", &name);
	int t;
	scanf("%d", &t);
	int i;
	t=t%26;
	for(i=0;i<n;i++){
		char x;
		if(isalpha(name[i])){
			
			if(isupper(name[i])){
				x='A';
			}
			else
			{
				x='a';
			}
			int y = t-(int)x;
			name[i]= x + (name[i]+y)%26;
			}
		}
		printf("%s", name);
	}
