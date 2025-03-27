#include <stdio.h>
int main() {
int i,n,s;
scanf("%d", &n);
i=2;
s=0;
while(i<n){
            if(n%i==0){
                s=1;
                break;
            }
        i++;
 }
if(s==1||n==1){
            printf("No");
}
else if (s!=1) {
         printf("Yes");
}
return 0;
}
