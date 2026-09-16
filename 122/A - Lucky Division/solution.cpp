#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    bool flag = false;
    for(int i = 0; i < 14; i++)
    {
        if(a[i] == n || n%a[i] == 0)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES
" : "NO
"); 
    return 0;
}