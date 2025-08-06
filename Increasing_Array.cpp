#include <iostream>
using namespace std;

void solve() {
    int n; cin >> n;
    long long a[n];
    for (auto &e: a) {cin >> e;}
    long long moves = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]){
            moves += a[i-1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << moves << '\n';
}

int main() {
    solve(); 
}
