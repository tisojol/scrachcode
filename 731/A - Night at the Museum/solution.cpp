#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int a, b, c, ans = (((s[0]-'a') < 13) ? (s[0]-'a') : ('a'+26 - s[0]));
    for(int i = 1; i < s.size(); i++)
    {
        a = abs(s[i] - s[i-1]);
        b = s[i]+26 - s[i-1];
        c = s[i-1]+26 - s[i];
        ans += min(a, min(b, c));
    }
    cout << ans << '
';
    return 0;
}