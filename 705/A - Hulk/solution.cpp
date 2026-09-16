#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << "I hate ";
    for(int i = 1; i < n; i++)
        cout << ((i%2 == 0) ? "that I hate " : "that I love ");
    cout << "it" << '
';
    return 0;
}