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
    if (isPrime(n))
        cout << 1 << endl;
    else if (n % 2 == 0)
        cout << 2 << endl;
    else
    {
        if (isPrime(n - 2))
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}
