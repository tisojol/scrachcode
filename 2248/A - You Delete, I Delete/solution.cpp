#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >> s;
        int i = 0;
        while(i < s.size())
        {
            if(s[i] == '0')
            {
                s.erase(i,1);
                i--;
                while(s[i] != '1')
                    i++;
                s.erase(i,1);
                break;
            }
            i++;
        }
        cout << s << '
';
    }
    return 0;
}