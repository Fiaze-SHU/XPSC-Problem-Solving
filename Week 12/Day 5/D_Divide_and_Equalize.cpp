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
            map<int,int>mp;

            for(int i = 0;i<n;i++)
            {
                for(int j=2;j*j<=v[i];j++)
                {
                    if(v[i]%j==0)
                    {
                        while(v[i]%j==0)
                        {
                            mp[j]++;
                            v[i]/=j;
                        }
                    }
                }
                if(v[i]>1)mp[v[i]]++;
            }
            bool flag=true;

            for(auto [x,y]:mp)
            {
                if(y%n!=0)
                {
                    flag=false;
                    break;
                }

            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    return 0;
}
