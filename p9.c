#include<stdio.h>
int main(){
int i,m,n;
scanf ("%d%d",&m,&n);
if(m<n){
        i=m+1;
  while(i<n){
     if(i%5==2||i%5==3){
         printf("%d\n",i);
      }
    i++;
   }
}
else if(n<m){
        i=n+1;
  while(i<m){
        if(i%5==2||i%5==3){
        printf("%d\n",i);
        }
      i++;
    }
}
return 0;
}
//another way
#include <stdio.h>

int main() {
    int x, y, i, min, max;
    scanf("%d %d", &x, &y);

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }

    i = min;
    while (i <= max) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
