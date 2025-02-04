/*
https://codeforces.com/problemset/problem/295/A
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<array<int, 3>> op(m);
    for (int i = 0; i < m; i++) 
        cin >> op[i][0] >> op[i][1] >> op[i][2];

    // Step 1: Query frequency using difference array
    vector<ll> op_count(m + 1, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        op_count[x - 1]++;
        op_count[y]--;
    }

    // Step 2: Compute prefix sum to get actual operation application count
    for (int i = 1; i < m; i++) {
        op_count[i] += op_count[i - 1];
    }

    // Step 3: Apply operations using another difference array
    vector<ll> diff(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int l = op[i][0] - 1, r = op[i][1] - 1, d = op[i][2];
        ll total_addition = d * op_count[i]; // Scale by operation count
        diff[l] += total_addition;
        diff[r + 1] -= total_addition;
    }

    // Step 4: Compute prefix sum for final values
    for (int i = 1; i < n; i++) {
        diff[i] += diff[i - 1];
    }

    // Step 5: Compute final array values
    for (int i = 0; i < n; i++) {
        cout << (a[i] + diff[i]) << " ";
    }
    cout << "\n";
}

int main() {
    solve();
    return 0;
}
