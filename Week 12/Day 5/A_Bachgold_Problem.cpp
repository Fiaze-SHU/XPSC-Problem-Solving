#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int cnt = n / 2;
    int cnt2 = 0;

    if (n % 2 != 0)
    {
        cnt--;
        cnt2++;
    }
    cout<<cnt+cnt2<<endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << 2 << " ";
    }
    for (int i = 0; i < cnt2; i++)
    {
        cout << 3 << " ";
    }
    cout << endl;
    return 0;
}
