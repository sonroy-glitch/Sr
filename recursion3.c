#include<stdio.h>
int func(int n){
    if (n==1){
         return 1;}
    printf("%d\n",n);
    return func(n-1);
}
    int main() {
    int n;
    scanf("%d",&n);
    func(n);
return 0;
}
