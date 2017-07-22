#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    int x; 
    int m; 
    float expected_profit=0;
    scanf("%i %i %i", &n, &x, &m);
    for(int a0 = 0; a0 < n; a0++){
        int w; 
        int p; 
        scanf("%i %i", &w, &p);
        expected_profit+= (x-w)*p/100;
    }
    expected_profit*=m;
    printf("%.1f", expected_profit);
    return 0;
}
