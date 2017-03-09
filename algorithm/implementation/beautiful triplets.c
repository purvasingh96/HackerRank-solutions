#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, k;
    int n, diff;
    scanf("%d %d", &n, &diff);
    int a[n], b[n], c[n], d[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    //nt c=0;

  i=0;j=0;k=0;

  while(i<n){
    b[i]=a[i];
    i=i+3;
    printf("b[i]: %d", b[i]);
  }
   while(j<n){
    c[j]=a[i+1];
     i=i+3;
     printf("c[j]: %d", c[j]);
  }
   while(k<n){
    d[k]=a[i+2];
    i=i+3;
    printf("d[k]: %d", d[k]);
  }


   return 0;

}
