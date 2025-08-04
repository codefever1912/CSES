#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int n; cin >> n;
    // long long total = (1LL * n * (n + 1)) / 2;
    // long long sum = 0;
    // for (int i = 1; i <= n - 1; i++) {
    //     int x; cin >> x;
    //     sum += x;
    // }

    // cout << total - sum << '\n';

    int n; cin >> n;
    vector<bool>visited(n, 0);
    for(int i = 0; i < n - 1; i++) {
        int x; cin >> x;
        visited[x - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            cout << i + 1 << '\n';
            break;
        }
    }

}