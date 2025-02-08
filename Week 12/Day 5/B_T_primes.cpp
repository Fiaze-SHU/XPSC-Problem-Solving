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

bool perfectSquare(int n)
{
    int x = sqrtl(n);
    return (x * x) == n;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (perfectSquare(n) && isPrime(sqrtl(n)))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
