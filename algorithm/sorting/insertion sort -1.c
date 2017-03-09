#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int n, int *  a) {

    int last = a[n-1];
    int i, j;

    for(i=n-2;i>=0;i--)
    {
        if(a[i]>last)
        {
            a[i+1]=a[i];
              for(j=0;j<n;j++)
            {
                printf("%d ", a[j]);
            }
            printf("\n");

        }
        else{
            a[i+1]=last;
            break;
            }

        }
        if(a[0]>last){
            a[0]=last;
        }
  for(i=0;i<n;i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");


}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }

    insertionSort(_ar_size, _ar);
    return 0;
}
