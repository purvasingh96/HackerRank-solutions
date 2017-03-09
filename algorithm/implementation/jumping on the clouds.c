#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, c=0;
    //printf("enter n: ");
    scanf("%d", &n);
    int a[n];
    //printf("enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n-1;)
    {
        //printf("a[%d]: %d", i, a[i]);
        if(a[i+1]==0 && a[i+2]==0)
        {
            i=i+2;
            c=c+1;
        }
        else
            if(a[i+1] ==1 && a[i+2]==0)
        {
            i=i+2;
            c=c+1;
        }
        else
            {
                i=i+1;
                c=c+1;
            }

    }
  printf("%d", c);
}
