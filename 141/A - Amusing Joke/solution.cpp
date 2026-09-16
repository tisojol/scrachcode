#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a+b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    cout << ((d == c) ? "YES
" : "NO
");
    return 0;
}