#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
     scanf("%d",&n);
   int array[5]={0,0,0,0,0};
    int max=array[1],i,ans,ele;

    for(i=0;i<n;i++){
        scanf("%d",&ele);
        array[ele]++;
    }
    for(i=1;i<=5;i++){
        if(array[i]>max) max=array[i],ans=i;
    }
    printf("%d",ans);
    return 0;
}
