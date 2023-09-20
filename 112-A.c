//https://codeforces.com/problemset/problem/112/A
#include<stdio.h>
#include<string.h>

int main(){
    char a[101],b[101];
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a'&&a[i]<='z') continue;
        else a[i]+=32;
    }
    getchar();
    scanf("%s",&b);
    for(int i=0;i<strlen(b);i++){
        if(b[i]>='a'&&b[i]<='z') continue;
        else b[i]+=32;
    }
    //printf("%s\n%s",a,b);
    printf("%d",strcmp(a,b));
    return 0;
}