#include<stdio.h>
void greeting(int n){
    if (n==0){
        return;
    }
    printf("HELLO!\n");
    greeting(n-1);
    return;
}
    int main() {
    int n;
    scanf("%d",&n);
    greeting(n) ;
return 0;
}
