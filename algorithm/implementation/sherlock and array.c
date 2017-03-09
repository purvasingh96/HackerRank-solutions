#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int result, a, b;
int t;
scanf("%d", &t);
while(t--)
{
    scanf("%d %d", &a, &b);
    result = floor(sqrt(b)) - ceil(sqrt(a))+1;
    printf("%d", result);
}

}
