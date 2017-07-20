#include <stdio.h>      /* printf */
#include <stdlib.h> 
int calGcd(long a, long b)
{
if (b)
        return calGcd(b, a % b);
    else
        return a;
}

int compare (const void * a, const void * b)
{
  return ( *(long*)b - *(long*)a );
} 
int main()
{
	long n, gcd, maxgcd=-1, i, j, sum=0, sumnew=0, anew, bnew, gcdprev=-1;
	scanf("%ld", &n);
	long a[n], b[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld", &a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		scanf("%ld", &b[j]);
	}
	int flag=0;
	qsort(a, n, sizeof(long), compare);
	qsort(b, n, sizeof(long), compare);
	
	long ai, bi, calculatedmaxgcd=-1, innercalgcdmax=-1;
	for(i=0;i<n;i++)
	{
		//maxgcd=-1;
		calculatedmaxgcd=-1;
		//innercalgcdmax=-1;
		for(j=0;j<n;j++)
		{
			gcd = calGcd(a[i], b[j]);
			
			if(gcd>calculatedmaxgcd)
			{
				if(gcd>maxgcd)
				{
					maxgcd=gcd;
					ai=a[i];
					bi=b[j];
					sum = ai+bi;
				}
			
				//printf("gcd for %d %d\n", a[i], b[j]);
				//printf("gcd greater maxgcd\n");
				//printf("gcd: %d\n", gcd);
				//maxgcd=gcd;
				calculatedmaxgcd=gcd;
				innercalgcdmax=gcd;
				
				//printf("calculatedmaxgcd: %d, maxgcd: %d, sum: %d\n", calculatedmaxgcd, maxgcd, sum);
			}
			else if(gcd==maxgcd)
			{
				//printf("gcd for %d %d\n", a[i], b[j]);
				//printf("gcd equal maxgcd\n");
				//printf("gcd: %d\n", gcd);
				sumnew = a[i]+b[i];
				if(sumnew>sum)
				{
					sum=sumnew;
				}
				//printf("calculatedmaxgcd: %d, maxgcd: %d, sum: %d\n", calculatedmaxgcd, maxgcd, sum);
			}
			//else{
				//printf("gcd for %d %d\n", a[i], b[j]);
				//printf("gcd: %d\n", gcd);
				//printf("gcd lesser maxgcd\n");
				//printf("calculatedmaxgcd: %d, maxgcd: %d, sum: %d\n", calculatedmaxgcd, maxgcd, sum);
			//}
		}
		//printf("calculatedmaxgcd: %d\n", calculatedmaxgcd);
		if(calculatedmaxgcd<maxgcd)
		{
			//printf("break");
			break;
		}
		else{
			maxgcd=calculatedmaxgcd;
		}
		
			gcdprev = maxgcd;
	}
	printf("%ld", sum);
 } 
