#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    // Inputs
    string s;
    long n;
    cin >> s;
    cin >> n;

    // Algorithm
    int stringLength = (n < s.length()) ? n : s.length();
    int remainder = n % stringLength;
    long repeats = n / stringLength;
    int inputCount = 0;
    int remainderCount = 0;

    for (int i = 0; i < stringLength; i++) {
        if (s[i] == 'a') {
            inputCount += 1;
            if (i < remainder) remainderCount += 1;
        }
    }

    // Outputs
    long totalOccurrences = repeats * inputCount + remainderCount;
    cout << totalOccurrences;

    return 0;
}
