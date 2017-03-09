#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, n;
	scanf("%d", &n);
	int p[n];
	for(i=1;i<=n;i++){
		scanf("%d", &p[i]);
	}
	int x;
	for(x=1;x<=n;x++){
		for(i=1;i<=n;i++){
			if(p[i]==x){
				for(j=1;j<=n;j++){
					if(p[j]==i){
						printf("%d\n", j);
					}
				}
			}
		}
	}
}
