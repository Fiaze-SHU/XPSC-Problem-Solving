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
    vector<int> ans;
    map<int, int> mp;

    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime(i))
        {
            ans.push_back(1);
            mp[1]++;
        }
        else
        {
            ans.push_back(2);
            mp[2]++;
        }
    }
    cout << mp.size() << endl;

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}