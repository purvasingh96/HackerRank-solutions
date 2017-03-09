#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, k, t[100], c, test;
    int i;
    scanf("%d", &test);


    while(test>0){
    //printf("enter n:");
    scanf("%d", &n);
    //printf("enter k:");
    scanf("%d", &k);
    //printf("enter timings: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &t[i]);
    }
    c=0;
    for(i=0;i<n;i++)
    {
            if(t[i]<=0)
            {
                c=c+1;
            }
    }
    //printf("c: %d", c);
   printf( c>= k ? "NO" : "YES");
    test=test-1;
    }

    return 0;
}
