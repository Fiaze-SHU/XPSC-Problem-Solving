#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int one = a - 1;
        int two = abs(b - c) + c - 1;

    
    if(one<two)cout<<1<<endl;
    else if(two<one)cout<<2<<endl;
    else cout<<3<<endl;

       
    }
    return 0;
}
