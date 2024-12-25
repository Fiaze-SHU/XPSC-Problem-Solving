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
        int n,k;
            cin>>n>>k;
            vector<int>v(n+1);
            for(int i=1;i<=n;i++)
            {
                cin>>v[i];
            }
            int cnt=0;
            bool flag=true;
            for(int i=1;i<=n;i++)
            {
                if(v[i]==i)continue;
                else
                {
                    int x= abs(i-v[i]);
                    if(x%k!=0)
                    {
                        cnt++;
                    }
                    if(cnt>2)flag=false;
                }
            }
            if(flag && cnt==2)cout<<1<<endl;
            else if(flag && cnt==0)cout<<0<<endl;
            else cout<<-1<<endl;
    }
    return 0;
}