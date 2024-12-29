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
        int n;
            cin>>n;
            vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
            int G=0,G2=0,ans=0;
            
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
               G= __gcd(G,v[i]);
               else
               G2=__gcd(G2,v[i]);
            }
            bool flag=true,flag2=true;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    if(v[i]%G2==0)flag2=false;
                }
                else
                {
                    if(v[i]%G==0)flag=false;
                }
            }
            if(flag)ans=G;
            else if(flag2)ans=G2;
             cout<<ans<<endl;

    }
    return 0;
}
