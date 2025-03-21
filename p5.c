#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
i=1;
while(i<=n){
        if(i%5==0){
        printf("%d ",i);
        }
    i+=1 ;
}
return 0;
}
