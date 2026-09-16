#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z = 0;
    cin >> x >> y;
    while(x < y)
    {
        if(y%2 == 0)
            y /= 2;
        else
            y++;
        z++;
    }
    cout << z + (x-y) << endl;
    return 0;
}