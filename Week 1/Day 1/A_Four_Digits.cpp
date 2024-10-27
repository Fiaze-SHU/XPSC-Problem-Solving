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
    string s;
    while (n > 0)
    {
        int a = n % 10;
        n = n / 10;
        s+=(a+'0');
    }
    while (s.size() < 4) {
        s += '0';
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
