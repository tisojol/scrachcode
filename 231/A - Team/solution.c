#include<stdio.h>
int main()
{
    int n,y=0;
    scanf("%d", &n);
    int a[n][3];
    for(int i=0; i<n; i++){
        int x=0;
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 1) x++;
        }
        if(x>1) y++;
    }
    printf("%d
", y);
    return 0;
}