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
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int maxA = *max_element(A.begin(), A.end());
        int maxBits = log2(maxA) + 1;

        int validXCount = 0;
        for (int X = 1; X < (1LL << maxBits); X++) {
            bool isValid = true;
            for (int i = 0; i < n; i++) {
                if ((X ^ A[i]) >= A[i]) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                validXCount++;
            }
        }

        cout << validXCount << endl;
    }

    return 0;
}
