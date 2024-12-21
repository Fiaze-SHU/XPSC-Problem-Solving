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
        vector<string>v(8);
        for(int i=0;i<8;i++)
        {
            cin>>v[i];
        }
        if(find(v.begin(),v.end(),"RRRRRRRR") !=v.end())
        {
            cout<<"R"<<endl;

        }
        else cout<<"B"<<endl;
        
        

    }
    return 0;
}
