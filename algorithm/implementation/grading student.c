#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, g, x;
	int i;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &g);
		x=((g/5)+1)*5;
		if(g%5!=0){
			if(x-g<3 && x>=40){
				g=x;
			}
		}
		printf("%d\n", g);
	}
}
