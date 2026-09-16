#include<stdio.h>
typedef struct bit{
    char x[5];
}sb;
int main()
{
    int n,y=0;
    scanf("%d", &n);
    sb p[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%s", p[i].x);
        if(p[i].x[1] == '+') y++;
        else y--;
    }
    printf("%d", y);
    return 0;
}