#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
i=1;
int count=0;
while(i<=n){
        if(i%5==0||i%7==0){
         count++;
        }
    i++;
}
printf("%d",count);
return 0;
}
