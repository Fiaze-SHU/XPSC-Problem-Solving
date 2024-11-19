#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = (n * (n - 1)) / 2;
        vector<int> v(a), ans;

        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int d = n - 1;
        for (int i = 0; i < a; i++) {
            ans.push_back(v[i]);
            d--;
            i += d;
        }

        ans.push_back(1000000000);
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
