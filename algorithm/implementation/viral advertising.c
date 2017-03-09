#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int share, recieve, m, i, count, temp=5;
    printf("enter m: ");
    scanf("%d", &m);
    count=floor(temp/2);
    //temp=m;
    for(i=1;i<m;i++)
    {
        recieve = 3*floor(temp/2);
        share = recieve/2;
        count=count+share;
        temp=recieve;
    }
    printf("%d", count);
    return 0;
}
