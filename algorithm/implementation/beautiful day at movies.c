#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l, h, rem, temp, i, rev, diff, k, c=0;
    //printf("enter l: ");
    scanf("%d", &l);
    //printf("enter h: ");
    scanf("%d", &h);
    //printf("enter k: ");
    scanf("%d", &k);
    for(i=l;i<=h;i++)
    {
        temp=i;
        rev=0;
   while(temp != 0)
    {
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
    }
    //printf("rev of %d is %d\n", i, rev);
    diff= abs(rev-i);
    //printf("diff: %d\n", diff);
    if(diff%k==0)
    {
        c=c+1;
    }

    }
printf("%d", c);

}
