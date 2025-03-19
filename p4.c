#include <stdio.h>
int main() {
    int N, i = 1;
    scanf("%d", &N);
    while (i <= N) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
####another way
#include<stdio.h>
int main(){
int i,m,n;
scanf("%d",&n);
i=1;
while(i<=n){
   printf("%d ",i);
    i+=2;
}
    return 0;
}
