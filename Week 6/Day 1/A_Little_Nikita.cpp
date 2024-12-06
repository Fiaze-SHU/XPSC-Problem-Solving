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
        int n,k;cin>>n>>k;
        if(n==k || n>k && (n-k)%2==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
