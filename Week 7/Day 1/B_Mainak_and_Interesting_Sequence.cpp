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
        int n,m;cin>>n>>m;
        if(n>m || n%2==0 && m%2!=0)cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
            if(n%2==0)
            {
                for(int i=1;i<=n-2;i++)
                {
                    cout<<1<<" ";
                    m--;
                }
                cout<<m/2<<" "<<m/2<<endl;

            }
            else
            {
                for(int i=1;i<=n-1;i++)
                {
                    cout<<1<<" ";
                    m--;
                }cout<<m<<endl;
            }
        }
    }
    return 0;
}
