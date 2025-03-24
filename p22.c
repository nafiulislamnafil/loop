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
