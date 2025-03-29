#include <stdio.h>
int main() {
int i,n,a,s;
scanf("%d", &n);//n=4
i=1;
s=0;
while(i<=n){//i=1 2 3 4
       scanf("%d", &a); //a=1 3 4 2 
       s=s*10+a;//s=1,13,134,1342
       i++;
}
printf("%d",s*s);
return 0;
}
