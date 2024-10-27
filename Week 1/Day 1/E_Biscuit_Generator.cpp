#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;

    int sum = 0;
    int i = 1;
    int ans=a;

    while (ans <= t)
    {
        sum += b;

        i++;
        ans = a * i;
    }
    cout << sum << endl;
    return 0;
}
