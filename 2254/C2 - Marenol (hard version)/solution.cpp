#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> ae, ao, be, bo;
        int ep = 0, op = 0;
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0)
            {
                if(a[i] == '1')
                    ae.push_back(ep);
                if(b[i] == '1')
                    be.push_back(ep);
                ep++;
            }
            else
            {
                if(a[i] == '1')
                    ao.push_back(op);
                if(b[i] == '1')
                    bo.push_back(op);
                op++;
            }
        }
        if(ae.size() != be.size() || ao.size() != bo.size())
        {
            cout << -1 << '
';
            continue;
        }
        long long ans = 0;
        for(int i = 0; ; i++)
        {
            if(i < ae.size())
                ans += abs(ae[i]-be[i]);
            if(i < ao.size())
                ans += abs(ao[i]-bo[i]);
            if(i > ae.size() && i > ao.size())
                break;
        }
        cout << ans << '
';
    }
    return 0;
}