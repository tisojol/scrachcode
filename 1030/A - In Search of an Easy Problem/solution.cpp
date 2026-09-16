#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0, a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            x = 1;
    }
    (x == 1) ? cout << "HARD" << endl : cout << "EASY" << endl;
    return 0;
}