#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, t, ht=1;
    scanf("%d", &n);
    int c[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &c[i]);
    }
    int j;
    for(j=0;j<n;j++)
    {
        int cycle= c[j];
        int k;
        if(c[j]==0)
            ht=1;
        else
        {
            ht=1;
            for(k=0;k<cycle;k++)
            {
                if(k%2==0)
                {
                    ht=ht*2;
                }
                else
                    ht=ht+1;
            }

        }
        printf("%d\n", ht);
    }
}
