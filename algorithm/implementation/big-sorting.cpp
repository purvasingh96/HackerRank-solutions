#include <bits/stdc++.h>

using namespace std;
bool compare(string a, string b)
{
    int n = a.length();
    int m = b.length();
    
    if(n==m)
    {
        return a<b;
    }
    return n<m;
    
}
int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    vector<string>:: iterator it;
    sort(unsorted.begin(), unsorted.end(), compare);
    int i;
    for(it=unsorted.begin();it!=unsorted.end();++it)
    {
        cout<<*it<<"\n";
    }
    // your code goes here
    return 0;
}
