#include<stdio.h>
int main()
{
    int a[5][5],x,y;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] != 0)
            {
                x=i;
                y=j;
            }
        }
    }
    if(x == 2 && y == 2) printf("0");
    else{
    int i = 0;
    while((x != 2) || (y != 2))
    {
        if(x>2) x--;
        else if(x<2) x++;
        else if(y>2) y--;
        else y++;
        i++;
    }
    printf("%d", i);
    }
    return 0;
}