#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int p = min(a,c) * min(b,c);
        cout << p << endl;
    }
    return 0;
}