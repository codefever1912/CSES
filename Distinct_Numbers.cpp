#include <iostream>
#include <set>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    set<int>s;
    for (auto &e : a) {cin >> e; s.insert(e);}

    cout << s.size() << '\n';
}

int main() {
    solve(); 
}
