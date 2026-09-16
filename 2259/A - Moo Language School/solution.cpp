#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        vector<int> a(n/k, 0);
        for(int i = 1, j = 0; i <= n; i++)
        {
            if(s[i-1] == '0')
                a[j] = 1;
            if(i%k == 0)
                j++;
        }
        int x = 0;
        for(int i = 0; i < n/k; i++)
            if(a[i] == 0) x++;
        cout << x << '
';
    }
    return 0;
}