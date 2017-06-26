#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i, j;
    int a[n];
    int swap=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
                swap++;
            }
        }
    }
    cout<<"Array is sorted in "<<swap<<" swaps."<<"\n";
    cout<<"First Element: "<<a[0]<<"\n";
    cout<<"Last Element: "<<a[n-1]<<"\n";
    
    return 0;
}
