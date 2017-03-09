#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, c=0;
    scanf("%d", &n);
    int a[n], t, j;
    int i=0, min;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

  for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                t =  a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

printf("%d\n", n);
  for(i=0;i<n;i++){
   if(a[i]!=0)
    min=a[i];
    else
        {
            while(a[i]==0){
                ++i;
            }
            min=a[i];
        }
   for(j=i;j<n;j++){
    a[j]=a[j]-min;
    if(a[j]>0){
        c=c+1;
    }
   }
   if(c!=0){
   printf("%d\n", c);
   }
   c=0;
  }

}
