#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, m, i, c=0, res=0, k, j;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(k=0;k<m;k++)
    {
        scanf("%d", &b[k]);
    }
 i=0, k=0;
   for(j=a[n-1];j<=b[0];j++)
    {

      while(i<n && k<m)
      {
          printf("j: %d, a[i]: %d, b[k]: %d\n", j, a[i], b[k]);
           if((j%a[i]==0) && (b[k]%j==0))
           {
               res=1;
               //c=c+1;
           }
           else{
            res=0;
           }
           i=i+1;
           k++;
      }
      //printf("%d: %d\n", j, res);
      if(res==1)
      {
          c=c+1;
      }



    }
    printf("%d", c);
       return 0;
    }


