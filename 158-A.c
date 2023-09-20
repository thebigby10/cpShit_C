//https://codeforces.com/problemset/problem/158/A
#include<stdio.h>
#include<math.h>

int main(){
    int n,k; scanf("%d %d", &n,&k);
    int count = 0;
    int arr[51]; 
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0) count++;
    }
    printf("%d", count);
    return 0;
}