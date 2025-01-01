#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0, mx = INT_MIN;;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] > mx)
            mx = v[i];
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = __gcd(x, abs(v[i] - mx));
    }
    sum = n * mx - sum;
    cout << sum / x << " " << x << endl;
    return 0;
}
