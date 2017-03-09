#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0, j;
    int a[n];

    while(i<n){
        for(j=0;j<=n;j++){
            cin>>a[j];
        }
        i++;
    }
    while(i<n){
        for(j=0;j<=n;j++){
            cout<<a[j];
        }
        i++;

    }

}
