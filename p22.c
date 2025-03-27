#include <stdio.h>
int main() {
int i,a,b,s;
scanf("%d%d", &a,&b);
i=1;
s=0;
while(i!=0){
        if(i%a==0&&i%b==0){
                s=1;
                break;
        }
    i++;
 }
 if(s==1){
printf("%d",i);
 }
return 0;
}
another away
#include <stdio.h>
int main() {
int a,i,b,lcm;
    scanf("%d%d", &a,&b);
    i=1;
   while (i!=0) {
        if(i%a==0&&i%b==0){
                lcm=i;
                break;
        }
      i++;
   }
   printf("%d",lcm);
    return 0;
}
