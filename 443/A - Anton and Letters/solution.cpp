#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin,s);
    sort(s.begin(), s.end());
    int x = 0;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] != s[i+1])
            x++;
    }
    if(s.size() == 2)
        cout << 0 << '
';
    else if(s.size() == 3)
        cout << 1 << '
';
    else
        cout << x-3 << '
';
    return 0;
}