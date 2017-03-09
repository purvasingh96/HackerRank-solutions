#include<stdio.h>
#include<stdlib.h>
int main()
{

  long n, m, s;
    long t, s_new;
     scanf("%ld", &t);
    while(t>0){

    scanf("%ld %ld %ld", &n, &m, &s);
        if((m-n+1)==n){
            while(m>1){
                s_new=n+1;
                m=m-1;
            }
            printf("%ld\n", s_new-1);
        }
        else if(m==n){
            printf("%ld", m);
        }
   else if((n-s+1)>m){
    while(m>1){
        s_new=s+1;
        m=m-1;
    }
    printf("%ld\n", s_new);
   }
   else{
    s_new= (m-(n-s+1))%n;
    printf("%ld\n", s_new);
   }
   t=t-1;
    }
    return 0;
}
}

