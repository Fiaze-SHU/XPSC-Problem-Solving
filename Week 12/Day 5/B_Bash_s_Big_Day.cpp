#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n), loop;
    map<int, int> mp;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even++;
        if (mp[v[i]] == 0 && v[i] != 1)
            loop.push_back(v[i]);
        mp[v[i]]++;
    }

    if (loop.empty())
    {
        cout << 1 << endl;
        return 0;
    }

    int mx = *max_element(loop.begin(), loop.end());
    sort(loop.begin(), loop.end());
    int cnt = 0;

    for (int i = 2; i <= mx; i++)
    {
        int x = i;
        int sum = 0;
        for (int j = x; j <= mx; j += x)
        {
            if (mp[j] > 0)
                sum += mp[j];
        }
        cnt = max(cnt, sum);
    }
    cout << max(even, cnt) << endl;
    return 0;
}
