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
        int n,m,k;
       cin>>n>>m>>k;
       int counta=0,countb=0;
       int a_max=0;
 
       vector<int>a;
       vector<int>b;
       for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
        a.push_back(x);
        a_max = max(x,a_max);
        if(a[i]<k)counta++;
       }
        for(int i=0;i<m;i++)
       {
        int x;
        cin>>x;
        b.push_back(x);
        
       }
 
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
 
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(a[i]+b[j]>k)break;
            else countb++;
       }
       }
 
       cout<<countb<<endl;
    }
    return 0;
}
