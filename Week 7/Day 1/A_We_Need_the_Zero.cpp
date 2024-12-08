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
            bool flag=false;
            
            for(int i=0;i<=256;i++)
            {
                int res = 0;
                for(int j=0;j<n;j++)
                {
                    res ^= (v[j]^i);

                }
                if(res==0)
                {
                    flag=true;
                    cout<<i<<endl;
                    break;
                }

            }
            if(!flag)
            {
                cout<<-1<<endl;

            }
    }
    return 0;
}
