#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(m);
        for (int i = 0; i < m; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        while (q--) {
            int q1;
            cin >> q1;

            if (q1 < v[0]) {
                cout << v[0] - 1 << "\n";
            }
            else if (q1 > v[m - 1]) {
                cout << n - v[m - 1] << "\n";
            }
            else {
                auto it = lower_bound(v.begin(), v.end(), q1);
                    int y = *it;     
                    int x = *(it - 1); 
                    cout << (y - x) / 2 << "\n";
                
            }
        }
    }
}
