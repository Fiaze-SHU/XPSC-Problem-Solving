#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,cnt_pos=1;
     cin>>n;

     vector<int>ans;
     set<pair<int,int>>st;
     multiset<pair<int,int>>ml;




     for(int i=0;i<n;i++)
     {
        int type;cin>>type;

        if(type==1)
        {
            int money;cin>>money;
            st.insert({cnt_pos,money});
            ml.insert({money,-cnt_pos});
            cnt_pos++;
        }
        else if(type==2)
        {
            int ps= st.begin()->first;int mn=st.begin()->second;
            ans.push_back(ps);
            st.erase({ps,mn});
            ml.erase({mn,-ps});

        }
        else
        {
            int mn= ml.rbegin()->first;int ps=-(ml.rbegin()->second);
            ml.erase(--ml.end());
            st.erase({ps,mn});
            ans.push_back(ps);
            

        }

     }
     for(auto i:ans)
     {
        cout<<i<<" ";
     }cout<<endl;
    return 0;
}
