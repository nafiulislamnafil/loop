#include <stdio.h>
int main() {
long long int i,a,b,s;
scanf("%lld%lld",&a,&b);
i=1;
s=1;
while(i<=b){
        s=s*a;
        i++;
    }
printf("%lld ",s);
return 0;
}

