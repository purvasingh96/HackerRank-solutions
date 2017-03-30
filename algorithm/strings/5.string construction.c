#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t, k;
    scanf("%d", &t);
  for(k=0;k<t;k++){
         char str1[100], p[100]="";
    int i=0, j=0, cost;
    char c, head, value=p[0];
    cost=0;
    scanf("%s", str1);
    while(str1[i])
    {
        c=str1[i];

        if(c!=value){
            p[j]=c;
            value=p[0];
            cost=cost+1;
            i++;
            j++;


        }
        else{
            value=p[j-1];
            i++;
            j++;
        }
    }
     printf("%d", cost);

    }


    //printf("%s", p);
}
