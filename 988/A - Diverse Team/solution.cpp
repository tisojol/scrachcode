#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int x = 0;
    int b[101] = {0};
    for(int i = 0; i < n; i++)
    {
        if(b[v[i]] == 0)
        {
            b[v[i]] = i+1;
            x++;
        }
    }
    if(k > x)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for(int i = 0, c = 0; i < n && c < k; i++)
        {
            if(b[v[i]] != 0)
            {
                cout << b[v[i]] << " ";
                b[v[i]] = 0;
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}