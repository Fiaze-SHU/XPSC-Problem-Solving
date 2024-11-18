#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int num = a * n;

        int rem = s % n;
        int cnt = s / n;

        if (num > s)
        {
            if (rem <= b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (num < s)
        {
            if (s - num <= b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
