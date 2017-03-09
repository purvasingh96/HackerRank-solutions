#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int d1;
    int m1;
    int y1;
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2;
    int m2;
    int y2;
    scanf("%d %d %d",&d2,&m2,&y2);
    int fine;
    if(d1<=d2 && m1<=m2 && y1<=y2){
        fine = 0;
    }
    else
        if(d1>d2 && m1==m2 && y1==y2){
        fine = 15*(abs(d2-d1));
    }
    else
        if(m1>m2 && y1==y2){
        fine = 500*(abs(m2-m1));
    }
    else
        if(y1>y2){
        fine = 10000;
    }
    printf("%d", fine);
    return 0;
}
