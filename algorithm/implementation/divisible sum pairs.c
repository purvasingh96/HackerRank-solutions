#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int a[100], c=0;
    int i, j;
    //printf("enter n: ");
    scanf("%d", &n);
    //printf("enter array: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    i=0;
    while(i<n){
            if(a[i]!=-1){
        j=i+1;
            while(j<n){
            if(a[j]!=-1){
                if(a[i]==a[j]){
                    c=c+1;
                    a[j]=-1;
                    //i=i+1;
                    break;
                }
                else{
                        c=c+0;
                    j=j+1;
                }
            }
            else{
                    c=c+0;
                j=j+1;
            }
        }i=i+1;

    }

    else{
        i=i+1;
    }


    }
    printf("%d", c);
    return 0;
}
