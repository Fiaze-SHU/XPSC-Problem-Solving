#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, r;
    cin >> l >> r;

    cout << "YES" << endl;
    int n= (r - l + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        cout << l << " " << l + 1 << endl;
        l += 2;
       
    }

    return 0;
}
