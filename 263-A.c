//https://codeforces.com/problemset/problem/263/A
#include<stdio.h>

int abs(int x){
    if(x>=0) return x;
    else return -x;
}

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x;
            scanf("%d",&x);
            if(x==1){
                //printf("%d %d\n",i,j);
                printf("%d", abs(3-i)+abs(3-j));
                break;
            }
        }
    }
    return 0;
}