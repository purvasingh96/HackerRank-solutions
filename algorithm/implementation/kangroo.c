#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1;
    int v1;
    int x2;
    int v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(v1==v2)
    {
        printf("NO");
    }
    else{
    int res1, res2;
    res1= (x2-x1)/(v1-v2);
    res2= (x2-x1)%(v1-v2);
    //printf("res: %d %d", res1, res2);
    if(res1>0 && res2==0 && v1!=v2)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    }
    return 0;
}
