#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]-1] = i+1;
    }
    for(int i = 0; i < n; i++)
        cout << b[i] << " ";
    return 0;
}