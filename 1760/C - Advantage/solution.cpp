#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
    cin >> n;
    vector<int> a(n), b(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
 
    sort(b.begin(), b.end());
 
    for (int i = 0; i < n; i++)
    {
        if (b[n - 1] == a[i])
            cout << a[i] - b[n - 2] << " ";
        else
            cout << a[i] - b[n - 1] << " ";
    }
    cout << endl;
    }
    return 0;
}