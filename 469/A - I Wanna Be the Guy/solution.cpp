#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int p, q;
    vector<int> a(n+1, 0);
    cin >> p;
    int b[p];
    for(int i = 0; i < p; i++)
    {
        cin >> b[i];
        a[b[i]] = 1;
    }
    cin >> q;
    int c[q];
    for(int i = 0; i < q; i++)
    {
        cin >> c[i];
        a[c[i]] = 1;
    }
    bool flag = true;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0)
            flag = false;
    }
    cout << (flag ? "I become the guy.
" : "Oh, my keyboard!
");
    return 0;
}