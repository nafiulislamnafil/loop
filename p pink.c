#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
for(i=2;i<=2*n;i+=2){
    printf("%d ",i);
}
return 0;
}
another way===>

#include <stdio.h>
int main() {
    int n, count = 0, sum = 0;
    scanf("%d", &n);
    while (count < n) {
        printf("%d\n", sum);
        sum += 2;
        count++;
    }
    return 0;
}
