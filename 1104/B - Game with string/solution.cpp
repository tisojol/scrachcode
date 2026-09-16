#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int y = 0, n = x.size(),m = 0;
    for(int i = 0; i < n; i++)
    {
        if(x[i] == x[i+1])
        {
            x.erase(i,2);
            y++;
            i = -1;
            n = x.size();
        }
    }
    if(y%2 != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
  
    return 0;
}