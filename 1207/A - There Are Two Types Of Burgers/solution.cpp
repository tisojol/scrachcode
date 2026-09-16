#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int op[t];
    for(int i = 0; i < t; i++)
    {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        if(b < 2)
            op[i] = 0;
        else
        {
            if(h > c)
            {
                if(p*2 > b)
                    op[i] = (b/2)*h;
                else if((p+f)*2 > b)
                    op[i] = (p*h) + ((b-(p*2))/2)*c;
                else
                    op[i] = p*h + f*c;
            }
            else
            {
                if(f*2 > b)
                    op[i] = (b/2)*c;
                else if((p+f)*2 > b)
                    op[i] = (f*c) + ((b-(f*2))/2)*h;
                else
                    op[i] = p*h + f*c;
            }
        }
    }
    for(int i = 0; i < t; i++)
        cout << op[i] << endl;
    return 0;
}