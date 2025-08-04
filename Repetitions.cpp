#include <iostream>
#include <climits>
using namespace std;

#define ll long long

int main(){
    string s; cin >> s;
    int n = s.length();
    int cnt = 1, mx = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) {
            mx = max(mx, cnt);
            cnt = 1;
        } else cnt++;
    }

    mx = max(mx, cnt); // In case that the longest seqeunce is at the end of the string

    cout << mx << '\n';
}