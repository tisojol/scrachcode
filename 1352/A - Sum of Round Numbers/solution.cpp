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
        int n;
        cin >> n;
        vector<int> v;
        int x;
        if(n >= 1000)
        {
            x = n - (n%1000);
            v.push_back(x);
            n %= 1000;
        }
        if(n >= 100)
        {
            x = n - (n%100);
            v.push_back(x);
            n %= 100;
        }
        if(n >= 10)
        {
            x = n - (n%10);
            v.push_back(x);
            n %= 10;
        }
        if(n > 0)
            v.push_back(n);
        cout << v.size() << '
';
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << ' ';
        cout << '
';
    }
    return 0;
}