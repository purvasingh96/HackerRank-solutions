#include<stdio.h>
#include<stdlib.h>
int main()
{
    long t;
    scanf("%ld", &t);
    while(t--){
    long array[100], n, i=0, rev, j=0, count=0;
    scanf("%ld", &n);
    int temp=n;
    while(n){
        rev= n%10;
        array[i]=rev;
        n=n/10;
        //printf("array[%d]: %d\n", i, array[i]);
        i++;

    }
    //printf("%d", i);
   while(j<i){
    if(array[j]==0){
        j++;
    }
    else{
        if(temp%array[j]==0){
            count=count+1;
            j++;
        }
        else
            j++;
    }
   }
   printf("%ld\n", count);
    }
}
