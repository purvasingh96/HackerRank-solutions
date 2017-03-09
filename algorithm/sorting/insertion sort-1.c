#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int p, i, t, j=0, k=0, left_size=0, right_size=0;
    scanf("%d", &n);
    int a[n], left[n], right[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    p=a[0];
    for(i=1;i<n;i++){
        if(a[i]>=p){
            left[j]=a[i];
            j++;
            left_size=left_size+1;
        }
        else{
            right[k]=a[i];
            k++;
            right_size=right_size+1;
        }
    }

    for(j=0;j<left_size;j++){
        printf("%d ", left[j]);
    }
    printf("%d ", p);

    for(k=0;k<right_size;k++){
        printf("%d ", right[k]);
    }
}
