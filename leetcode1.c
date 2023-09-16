#include <stdio.h>
int main(){
  int arr[100],n,p;
  scanf("%d",&n); 
  // printf("enter the sum you want")
 
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  scanf("%d",&p);
     for(int k=0;k<n;k++){
       for(int j=0;j<n;j++){
             if(arr[k]+arr[j]==p)
             printf("[%d %d]",j,k);
       }

     }
  }
