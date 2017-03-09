#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

        int n, A_i;
        scanf("%d", &n);
        int A[n];
        for( A_i=0; A_i < n; A_i++){
            scanf("%d", &A[A_i]);
        }
        int min=100000000;
        int d,i,j,k=0;
        for( i=0;i<n-1;i++){
            for( j=i+1;j<n;j++){
                if(A[i]==A[j]){
                    k++;
                    d=i-j;
                    d=abs(d);
                    if(d<min)
                    min=d;

                }

            }
        }
        if(k==0)
            min=-1;
        printf("%d",min);
    return 0;
}
