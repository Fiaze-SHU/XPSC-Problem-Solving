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
    int t;
    cin >> t;
    int one = 1;
    while (t--)
    {
        int n;
        cin >> n;

        int one, two;
        for (int i = n + 1;; i++)
        {
            if (isPrime(i))
            {
                one = i;
                break;
            }
        }
        for (int i = one + n;; i++)
        {
            if (isPrime(i))
            {
                two = i;
                break;
            }
        }
        cout << one * two << endl;
    }
    return 0;
}
