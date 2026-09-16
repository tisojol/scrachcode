#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    char a[100],b[100];
    scanf("%s %s", a, b);
    int x=0;
    for(int i = 0; a[i] != '\0'; i++){
        if(tolower(a[i])>tolower(b[i]))
        {
            x++;
            printf("1");
            return 0;
        }
        else if(tolower(a[i])<tolower(b[i]))
        {
            x++;
            printf("-1");
            return 0;
        }
    }
    if(x==0) printf("0");
    return 0;
}