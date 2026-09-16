#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[4],x;
    for(int i=n+1; i<=9012; i++){
        n=i;
        x=0;
        for(int j=3; j>=0; j--){
            a[j] = n%10;
             n /= 10;
        }
        for(int j=0; j<4; j++){
            for(int k=j+1; k<4; k++){
              if(a[j] != a[k]) x++;
            }
        }
         if(x==6){
                printf("%d
",i);
       return 0;
          }
    }
    return 0;
}