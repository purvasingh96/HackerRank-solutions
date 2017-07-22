#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector <int> p, vector <int> d) {
    // Complete this function
    int i, j, flag=0;
    for(i=1, j=1;i<n, j<n;i++, j++)
    {
        if(((d[i]>d[i-1])&&(p[j]>p[j-1])) || ((d[i]<d[i-1])&&(p[j]<p[j-1])) || ((d[i]==d[i-1])&&(p[j]==p[j-1])))
        {
            flag=1;
            //break;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return "Yes";
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector<int> d(n);
    for(int d_i = 0; d_i < n; d_i++){
       cin >> d[d_i];
    }
    string result = solve(n, p, d);
    cout << result << endl;
    return 0;
}
