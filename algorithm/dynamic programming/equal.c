#include<stdio.h>
int main(){
  int a[50],size,i,j=0,big,secondbig;
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  printf("Enter %d elements in to the array: ", size);
  for(i=0;i<size;i++)
      scanf("%d",&a[i]);

  big=a[0];
  for(i=1;i<size;i++){
      if(big<a[i]){
           big=a[i];
           j = i;
      }
  }

  secondbig=a[size-j-1];
  for(i=1;i<size;i++){
      if(secondbig <a[i] && j != i)
          secondbig =a[i];
  }

  printf("Second biggest: %d", secondbig);
  return 0;
}
