#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c, ans = 0;
    cin >> n;
    string s, ss;
    cin >> s >> ss;
    for(int i = 0; i < n; i++)
    {
        a = abs(s[i] - ss[i]);
        b = s[i]+10 - ss[i];
        c = ss[i]+10 - s[i];
        ans += min(c, min(a, b));
    }
    cout << ans << '
';
    return 0;
}