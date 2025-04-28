#include<stdio.h>
int main(){
int i,n;
scanf ("%d",&n);
i=3;
while(i<=n){
        printf("%d ",i);
    i+=4 ;
}
return 0;
}
another way
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int i=3;i<=n;i+=4){
    printf("%d ",i);
    }
   return 0;
   }
