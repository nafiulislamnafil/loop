#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
i=1;
while(i<=10000){
      if(i%n==2){
    printf("%d\n",i);
    }
    i++;
}
return 0;
}
