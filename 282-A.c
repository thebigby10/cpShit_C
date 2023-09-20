//https://codeforces.com/problemset/problem/282/A
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int x = 0; 
    while(n--){
        getchar();
        char a,b,c; a = getchar(); b = getchar(); c = getchar();
        //  printf("%c%c%c\n",a,b,c);
        if(a=='+' || b=='+') x++;
        if(a=='-' || b=='-') x--;
    }
    printf("%d",x);
    return 0;
}