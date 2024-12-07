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
            int sum=0;
            bool flag=false;
            for(int i=0;i<n-1;i++)
            {
                if(v[i]>0)
                {
                    flag=true;

                }
                if(flag)
                {
                    if(v[i]==0)sum++;
                    else sum+=v[i];

                }

            }
            cout<<sum<<endl;
    }
    return 0;
}
