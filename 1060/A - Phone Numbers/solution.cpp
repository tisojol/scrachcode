#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x = 0, y = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '8')
            x++;
    }
    y = n/11;
    int ans = min(x, y);
    cout << ans << '
';
    return 0;
}