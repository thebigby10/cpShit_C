//https://codeforces.com/problemset/problem/231/A
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int solved = 0;
    while(n--){
        int a,b,c; scanf("%d %d %d",&a,&b,&c);
        int count = 0;
        if(a==1) count++;
        if(b==1) count++;
        if(c==1) count++;
        if(count>=2) solved++;
    }
    printf("%d",solved);
    return 0;
}