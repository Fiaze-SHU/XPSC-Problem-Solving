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
        string a, b;
        cin >> a >> b;
        int a_size = a.size();
        int b_size = b.size();
        int x_a = 0, x_b = 0;

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'X')
                x_a++;
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == 'X')
                x_b++;
        }
        if (a[a_size - 1] == b[b_size - 1])
        {
            if (a[a_size - 1] == 'S')
            {
                if (x_a > x_b)
                    cout << '<' << endl;
                else if (x_a < x_b)
                    cout << '>' << endl;
                else
                    cout << "=" << endl;
            }
            else if (a[a_size - 1] == 'M' || a[a_size - 1] == 'L')
            {
                if (x_a > x_b)
                    cout << '>' << endl;
                else if (x_a < x_b)
                    cout << '<' << endl;
                else
                    cout << "=" << endl;
            }
        }
        else if(a[a_size - 1]=='S' && b[b_size - 1]!='S')
        {
            cout<<'<'<<endl;
        }
        else if(a[a_size - 1]=='M')
        {
            if(b[b_size - 1]=='S')cout<<'>'<<endl;
            else cout<<'<'<<endl;
        }
        else if(a[a_size - 1]=='L')cout<<">"<<endl;
    }

    return 0;
}
