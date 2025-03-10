#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
i=1;
int sum=0;
while(i<=n){
        sum=sum+i ;
    i+=1 ;
}
printf("%d",sum);
return 0;
}
