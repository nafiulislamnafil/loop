#include<stdio.h>
#include<math.h>
int main() {
    int i,n,a;
    scanf("%d", &n);
    i=2;
    a=0;
    while(i<n){
       if(n%i==0){
        a=1;
        break;
        }
        i++;
     }
    if(a==1|| n==1){
        printf("no prime");
    }
    else{
        printf("yes prime");
    }
    return 0;
}
