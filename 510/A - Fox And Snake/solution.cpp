#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c = 0;
    cin >> a >> b;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(i%2 == 0)
                cout << '#';
            else
            {
                if(c%2 == 0 && j == b-1)
                {
                    cout << '#';
                    continue;
                }
                if(c%2 != 0 && j == 0)
                {
                    cout << '#';
                    continue;
                }
                cout << '.';
            }
        }
        cout << '
';
        if(i%2 != 0) c++;
    }
    return 0;
}