#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        int p, x = 0;
        cin >> p;
        int val[p];
        for(int j = 0; j < p; j++)
        {
            cin >> val[j];
            x += val[j];
        }
        a[i] = x;
        b[i] = p;
    }
    for(int i = 0; i < n; i++)
    {
        (a[i]%b[i] == 0) ? cout << a[i]/b[i] << endl : cout << a[i]/b[i]+1 <<endl;
    }
    return 0;
}