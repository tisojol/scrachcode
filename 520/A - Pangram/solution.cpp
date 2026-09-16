#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
        s[i] = tolower(s[i]);   
    sort(s.begin(), s.end());
    int x = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] != s[i+1])
            x++;
    }
    cout << ((x == 25) ? "YES" : "NO") << '
';   
    return 0;
}