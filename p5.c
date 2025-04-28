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
//another way 
#include<stdio.h>
int main (){
    int n,i;
    scanf("%d",&n);
    i=5;
    while(i<=n){
    printf("%d ",i);
    i+=5;
}
return 0;
}
