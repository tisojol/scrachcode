#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n, m = 0;
      cin >> n;
      int p[n][2];
      for(int i = 0; i < n; i++)
      {
            cin >> p[i][0] >> p[i][1];
            if(p[i][1] - p[i][0] > 1)
                  m++;
      }
      cout << m << endl;
      return 0;
}