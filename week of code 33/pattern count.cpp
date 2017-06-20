#include <bits/stdc++.h>
using namespace std;

int patternCount(std::string s){
    // Complete this function
    
    int c;
    
          smatch m;
          c=0;
          regex e ("10[0]*1");   // matches words beginning by "sub"

    //string s1("1");
  while (regex_search (s,m,e)) {
    for (auto x:m) 
    c=c+1;;
    //std::cout << std::endl;
    
    s = "1"+ m.suffix().str();
  }
  
  return c;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = patternCount(s);
        cout << result << endl;
    }
    return 0;
}
