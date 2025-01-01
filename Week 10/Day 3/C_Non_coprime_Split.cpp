#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return true;
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
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l == r)
        {
            if (isPrime(r))
                cout << -1 << endl;
            else
            {
                int x;
                for (int i = 2; i * i <= r; i++)
                {
                    if (r % i == 0)
                    {
                        x = i;
                        break;
                    }
                }
                cout << x << " " << r - x << endl;
            }
        }
        else
        {
            if(isPrime((r/2)*2))cout<<-1<<endl;
            else{
                cout<<2<<" "<<((r/2)*2)-2<<endl;
            }
        }
           
    }
    return 0;
}
