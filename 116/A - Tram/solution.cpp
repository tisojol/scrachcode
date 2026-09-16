#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n][2];
    for(int i = 0; i < n; i++)
        cin >> x[i][0] >> x[i][1];
    int p = x[0][1];
    int q = x[0][1];
    for(int i = 1; i < n; i++)
    {
        p = (p-x[i][0]) + x[i][1];
        if(p > q)
            q = p;
    }
    cout << q << endl;
    return 0;
}