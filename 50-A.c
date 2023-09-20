//https://codeforces.com/problemset/problem/50/A
#include<stdio.h>

int main(){
    int n,m; scanf("%d %d",&n,&m);
    if(n<=1 && m<=1) printf("0");
    else if(n%2==0 || m%2==0) printf("%d",(n*m)/2);
    else{
        printf("%d",((n*m)-1)/2 );
    }
    return 0;
}