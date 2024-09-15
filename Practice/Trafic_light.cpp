#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;

        string ans = s + s;
        int cnt = 0;
        int nextG = -1;

        for (int i = 2 * n - 1; i >= 0; --i) {
            if (ans[i] == 'g') {
                nextG = i;
            }
            if (ans[i] == c && nextG != -1) {
                cnt = max(cnt, nextG - i);
            }
        }

        cout << cnt << "\n";
    }
}
